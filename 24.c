#include <stdio.h>

int main() {
    int num, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 

    printf("Digits in reverse order: ");

    if (num == 0) {
        printf("0");
    } else {
        while (temp != 0) {
            digit = temp % 10;       
            printf("%d ", digit);    
            temp = temp / 10;        
        }
    }

    
    return 0;
}
