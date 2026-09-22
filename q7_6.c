#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0, place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %lld\n", binary);

    return 0;
}