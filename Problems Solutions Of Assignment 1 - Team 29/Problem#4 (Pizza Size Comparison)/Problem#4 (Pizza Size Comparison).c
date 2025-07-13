#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

//this program compares the price per square inch of two pizzas based on their diameters and prices.
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
        //in case if both pizzas have the same price per square inch compare the areas
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