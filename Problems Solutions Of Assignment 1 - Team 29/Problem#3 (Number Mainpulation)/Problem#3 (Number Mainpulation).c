#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

bool isPerfectSquare(int number) {
    return (number >= 0 && (int)sqrt(number) * (int)sqrt(number) == number);
}

int ReverseNumber(int number){
    int Reversed = 0;
    while(number != 0) {
        int digit = number % 10;
        Reversed = Reversed * 10 + digit;
        number /= 10;
    }
    return Reversed;
}

int SumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfectSquare(number)) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    printf("Reversed number: %d\n", ReverseNumber(number));

    printf("Sum of digits: %d\n", SumOfDigits(number));

    return 0;
}