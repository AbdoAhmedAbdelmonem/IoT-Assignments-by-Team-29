#include <stdio.h>
#include <stdbool.h>

int Imp_Atoi(const char *s) {
    int value = 0;
    bool negative = false;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '-' && i == 0) {
            negative = true;
        } else if (s[i] >= '0' && s[i] <= '9') {
            value = value * 10 + (s[i] - '0');
        } else {
            break;
        }
    }
    return negative ? -value : value;
}

int main(void) {
    char buf[200];
    printf("Enter a string to convert to integer: ");
    scanf("%s", buf);
    int result = Imp_Atoi(buf);
    printf("Your Extracted integer is : %d\n", result);
    return 0;
}
