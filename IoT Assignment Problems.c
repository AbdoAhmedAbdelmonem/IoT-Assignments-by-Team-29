#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// int ReverseNumber(int number){
//     int Reversed = 0;
//     while(number != 0) {
//         int digit = number % 10;
//         Reversed = Reversed * 10 + digit;
//         number /= 10;
//     }
//     return Reversed;
// }

// int isPrime(int number){
//     if(number<1) return 1; // Treat 0 and 1 as prime for this context
//     for (int i = 2; i * i <= number; i++) {if (number % i == 0) return 0;}
//     return 1;
// }

// int countDigits(int number) {
//     int count = 0;
//     while (number != 0) {
//         number /= 10;
//         count++;
//     }
//     return count;
// }

// int main(void) {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Reversed number: %d\n", ReverseNumber(number));
//     printf("Number of digits: %d\n", countDigits(number));
//     if (isPrime(number)) {
//         printf("The number %d is prime\n", number);
//     } else {
//         printf("The number %d is not prime\n", number);
//     }
//     return 0;
// }

// This program calculates the total due, minimum payment, and interest rate based on the account balance.
// Problem 2 in IOT Assignment 1

void PaymentCalculator() {
    float Balance,totalDue,minPayment,interestRate;
    printf("Enter your account balance:$ ");
    scanf("%f", &Balance);
    char continueTransaction = 'y';
    while (continueTransaction== 'y' || continueTransaction == 'Y') {
        if(Balance<1000){
            interestRate = Balance * 0.015;
        }else{
            interestRate = 1000 * 0.015 + (Balance - 1000) * 0.01;
        }
        totalDue = Balance + interestRate;
        if(totalDue < 10){
            minPayment = totalDue;
        }else{
            minPayment = (totalDue * 0.1>10) ? totalDue * 0.1 : 10;
        }
        printf("Total due: $%.2f\n", totalDue);
        printf("Minimum payment: $%.2f\n", minPayment);
        printf("interest rate: $%.2f\n", interestRate);
        printf("Do you want to continue? (y-Y for yes, n-N for no): ");
        scanf(" %c", &continueTransaction);
    }
    printf("Thank you for using our service!\n");
    printf("Your final balance is: $%.2f\n", Balance);
}


//Problem 3 in IOT Assignment 1
// Function to check if a number is a perfect square
bool isPerfectSquare(int number) {
    return (number >= 0 && (int)sqrt(number) * (int)sqrt(number) == number);
}

// Function to reverse a number
int ReverseNumber(int number){
    int Reversed = 0;
    while(number != 0) {
        int digit = number % 10;
        Reversed = Reversed * 10 + digit;
        number /= 10;
    }
    return Reversed;
}
// Function to calculate the sum of digits of a number
int SumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

//Problem 4 in IOT Assignment 1 (Pizza Size Comparison)
#define M_PI 3.14159265358979323846
void PizzaSizeComparison() {
    float Diameter1, Diameter2, Price1, Price2;
    printf("Enter the diameter of the first pizza: ");
    scanf("%f", &Diameter1);
    printf("Enter the price of the first pizza: ");
    scanf("%f", &Price1);
    printf("Enter the diameter of the second pizza: ");
    scanf("%f", &Diameter2);
    printf("Enter the price of the second pizza: ");
    scanf("%f", &Price2);

    float Area1 = M_PI * (Diameter1 / 2) * (Diameter1 / 2);
    float Area2 = M_PI * (Diameter2 / 2) * (Diameter2 / 2);
    float PricePerSquareInch1 = Price1 / Area1;
    float PricePerSquareInch2 = Price2 / Area2;
    //determine which pizza is a better deal
    if (PricePerSquareInch1 < PricePerSquareInch2) {
        printf("The first pizza is a better deal\n");
    } else if (PricePerSquareInch1 > PricePerSquareInch2) {
        printf("The second pizza is a better deal\n");
    } else {
        //in case both pizzas have the same price per square inch compare the areas
        if (Area1 > Area2) {
            printf("The first pizza has a larger area\n");
        } else if (Area1 < Area2) {
            printf("The second pizza has a larger area\n");
        } else {
            printf("Both pizzas have the same area and price per square inch\n");
        }
    }

}
int main(void) {
    PizzaSizeComparison();
    return 0;
}