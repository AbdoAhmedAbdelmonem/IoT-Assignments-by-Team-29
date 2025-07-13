#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    bool ne = 0;
    char arr[200];
    scanf("%s", &arr);
    // fgets(arr, sizeof(arr), stdin);
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == '-' && i == 0){
            ne = 1;
            continue;
        }else if(arr[i] >= '0' && arr[i] <= '9'){
            if(arr[i] >= '0' && arr[i] <= '9') a = a * 10 + (int)arr[i] - (char)'0';
        }else break;
    }
    if(ne) a = -a;
    printf("%d", a);
    return 0;
}
