#include <stdio.h>

int main() {
    int num, temp, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num; 

    if (num == 0) {
        count = 1; 
    } else {
        while (temp != 0) {
            temp = temp / 10; 
            count++;          
        }
    }

    printf("Number of digits in %d is: %d", num, count);

    return 0;
}
