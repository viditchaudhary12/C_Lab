#include <stdio.h>

struct DeviceStatus {
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main() {
    struct DeviceStatus dev;
    unsigned int p, m, e, b;

    printf("Enter power (0-1): ");
    if (scanf("%u", &p) != 1) return 0;
    printf("Enter mode (0-3): ");
    if (scanf("%u", &m) != 1) return 0;
    printf("Enter error status (0-1): ");
    if (scanf("%u", &e) != 1) return 0;
    printf("Enter battery level (0-15): ");
    if (scanf("%u", &b) != 1) return 0;

    if (p <= 1 && m <= 3 && e <= 1 && b <= 15) {
        dev.power = p;
        dev.mode = m;
        dev.error = e;
        dev.battery = b;

        printf("\n--- Device Status Summary ---\n");
        printf("Power: %u\n", dev.power);
        printf("Mode: %u\n", dev.mode);
        printf("Error: %u\n", dev.error);
        printf("Battery Level: %u / 15\n", dev.battery);
        printf("Note: Memory layout is compiler-dependent.\n");
    } else {
        printf("Error: Input values exceed allowable bit-width ranges!\n");
    }

    return 0;
}