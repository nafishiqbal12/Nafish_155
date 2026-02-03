#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b > c && b + c > a && a + c > b) {

       
        if (a == b && b == c) {
            printf("Equilateral");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles");
        }
        else {
            printf("Scalene");
        }

    } else {
        printf("Invalid");
    }

    return 0;
}
