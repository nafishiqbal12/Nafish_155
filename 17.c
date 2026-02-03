#include <stdio.h>

int main() {
    int temp;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);

    if (temp >= 20) {
        printf("Hot");
    }
    else if (temp >= 10 && temp <= 19) {
        printf("Cool");
    }
    else {
        printf("Cold");
    }

    return 0;
}
