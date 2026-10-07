#include <stdio.h>

int main()
{
    int amount;
    int transactions=0;
    int total=0;

    while (1)
    {
        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);

        if (amount==0)
        {
            break;
        }

        printf("Withdrawal processed: %d\n", amount);

        transactions=transactions+1;
        total=total+amount;
    }

    printf("Session ended.\n");
    printf("Total transactions: %d\n", transactions);
    printf("Total amount withdrawn: %d\n", total);

    return 0;
}