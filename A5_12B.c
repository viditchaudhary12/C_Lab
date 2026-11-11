#include <stdio.h>

enum State { IDLE, COIN_INSERTED, DISPENSE, OUT_OF_STOCK };
enum Command { INSERT_COIN, SELECT_ITEM, COLLECT_ITEM, RESTOCK };

enum State nextState(enum State current, enum Command cmd, int *stock) {
    switch (current) {
        case IDLE:
            if (cmd == INSERT_COIN) {
                if (*stock > 0) return COIN_INSERTED;
                else return OUT_OF_STOCK;
            }
            break;
        case COIN_INSERTED:
            if (cmd == SELECT_ITEM) {
                if (*stock > 0) {
                    (*stock)--;
                    return DISPENSE;
                } else return OUT_OF_STOCK;
            } else if (cmd == INSERT_COIN) {
                return COIN_INSERTED;
            }
            break;
        case DISPENSE:
            if (cmd == COLLECT_ITEM) {
                return (*stock > 0) ? IDLE : OUT_OF_STOCK;
            }
            break;
        case OUT_OF_STOCK:
            if (cmd == RESTOCK) {
                *stock += 5;
                return IDLE;
            }
            break;
    }
    printf("Invalid state transition for current command!\n");
    return current;
}

int main() {
    int stock = 2;
    enum State state = IDLE;

    printf("Initial State: IDLE (Stock: %d)\n", stock);

    // Transition 1: IDLE -> COIN_INSERTED
    state = nextState(state, INSERT_COIN, &stock);
    printf("Command: INSERT_COIN -> State: COIN_INSERTED\n");

    // Transition 2: COIN_INSERTED -> DISPENSE
    state = nextState(state, SELECT_ITEM, &stock);
    printf("Command: SELECT_ITEM -> State: DISPENSE (Stock left: %d)\n", stock);

    // Transition 3: DISPENSE -> IDLE
    state = nextState(state, COLLECT_ITEM, &stock);
    printf("Command: COLLECT_ITEM -> State: IDLE\n");

    return 0;
}