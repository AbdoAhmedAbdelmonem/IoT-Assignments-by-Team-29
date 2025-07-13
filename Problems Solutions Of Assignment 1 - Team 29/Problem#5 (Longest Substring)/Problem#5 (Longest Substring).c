#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int count=0, length=0;
    bool f;
    char a[50000];
    fgets(a, sizeof(a), stdin);
    for(int i = 0; a[i] != '\0' && a[i] != '\n'; i++){
        count = 0;
        for(int j = i; a[j] != '\0' && a[j] != '\n'; j++){
            f = 1;
            for(int k = j - 1; k >= i; k--){
                if(a[j] == a[k]){
                    f = 0;
                    break;
                }
            }
            if(f) count++;
            else break;
        }
        length = (length > count) ? length : count;
    }
    printf("%d", length);
    return 0;
}
