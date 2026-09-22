#include <stdio.h>

int main()
{
    int choice, n, original, temp;
    int reverse, remainder, sum, count, i, prime;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the Number of Digits\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                reverse = 0;

                while (n > 0)
                {
                    remainder = n % 10;
                    reverse = reverse * 10 + remainder;
                    n = n / 10;
                }

                if (original == reverse)
                    printf("%d is a Palindrome.\n", original);
                else
                    printf("%d is not a Palindrome.\n", original);

                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                temp = n;
                count = 0;
                sum = 0;

                // Count the number of digits
                while (temp > 0)
                {
                    count++;
                    temp = temp / 10;
                }

                temp = n;

                // Calculate Armstrong sum
                while (temp > 0)
                {
                    int power = 1;

                    remainder = temp % 10;

                    for (i = 1; i <= count; i++)
                    {
                        power = power * remainder;
                    }

                    sum = sum + power;
                    temp = temp / 10;
                }

                if (sum == original)
                    printf("%d is an Armstrong Number.\n", original);
                else
                    printf("%d is not an Armstrong Number.\n", original);

                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &n);

                prime = 1;

                if (n <= 1)
                {
                    prime = 0;
                }
                else
                {
                    for (i = 2; i < n; i++)
                    {
                        if (n % i == 0)
                        {
                            prime = 0;
                            break;
                        }
                    }
                }

                if (prime == 1)
                    printf("%d is a Prime Number.\n", n);
                else
                    printf("%d is not a Prime Number.\n", n);

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &n);

                original = n;
                sum = 0;

                while (n > 0)
                {
                    remainder = n % 10;
                    sum = sum + remainder;
                    n = n / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &n);

                count = 0;

                if (n == 0)
                {
                    count = 1;
                }
                else
                {
                    while (n > 0)
                    {
                        count++;
                        n = n / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

    } while (choice != 6);

    return 0;
}