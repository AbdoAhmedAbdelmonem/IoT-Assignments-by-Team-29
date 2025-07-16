#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

void PaymentCalculator()
{
    float Balance, totalDue, minPayment, interestRate;
    char continueTransaction = 'y';
    while (continueTransaction == 'y' || continueTransaction == 'Y')
    {
        printf("Enter your account balance:$ ");
        scanf("%f", &Balance);
        if (Balance <= 0)
        {
            printf("Balance cannot be Negative!, Try Again\n");
        }
        else
        {
            if (Balance < 1000)
            {
                interestRate = Balance * 0.015;
            }
            else
            {
                interestRate = 1000 * 0.015 + (Balance - 1000) * 0.01;
                totalDue = Balance + interestRate;
                if (totalDue < 10)
                {
                    minPayment = totalDue;
                }
                else
                {
                    minPayment = (totalDue * 0.1 > 10) ? totalDue * 0.1 : 10;
                }
                printf("Total due: $%.2f\n", totalDue);
                printf("Minimum payment: $%.2f\n", minPayment);
                printf("interest rate: $%.2f\n", interestRate);
                printf("Do you want to continue? (y-Y for yes, n-N for no): ");
                scanf(" %c", &continueTransaction);
            }
        }
    }
    printf("Thank you for using our service!\n");
}

int main(void)
{
    PaymentCalculator();
    return 0;
}
