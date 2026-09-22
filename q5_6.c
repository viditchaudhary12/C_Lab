#include<stdio.h>
int main() {
    int l, u, n, isprime;
    int i, c = 0;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &l, &u);

    for(n = l; n <= u; n++) {
        if(n < 2) {
            continue;
        } else {
            isprime = 1;
            for(i = 2; i <= n/2; i++) {
                if(n % i == 0) {
                    isprime = 0;
                    break;
                }
            }
            if(isprime) {
                printf("%d ", n);
                c++;
            }
        }
    }
    printf("\nTotal prime numbers: %d\n", c);
    return 0;
}