#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    int size1;
    printf("Enter the size of the First Array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the First Array: ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    
    int size2;
    printf("Enter the size of the Second Array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the Second Array: ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }

    int total = size1 + size2;
    int mid1 = total / 2;
    int mid2 = (total % 2 == 0) ? mid1 - 1 : mid1;

    int i = 0, j = 0, count = 0;
    double val1 = 0, val2 = 0;

    while(count <= mid1){
        int val;
        if(i < size1 && j < size2){
            if(arr1[i] <= arr2[j]) val = arr1[i], i++;
            else val = arr2[j], j++;
        }else if(i < size1) val = arr1[i], i++;
        else if(j < size2) val = arr2[j], j++;

        if(count == mid2) val2 = val;
        if(count == mid1) val1 = val;
        count++;
    }
    printf("Median = %f", (val1 + val2) / 2);
    return 0;
}
