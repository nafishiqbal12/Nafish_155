#include<stdio.h>
int main() {
    int X, Y;
    printf("Enter two numbers: ");
    scanf("%d %d", &X, &Y);
    if (X > Y) {
        printf("%d", X);
    } else if (Y > X) {
        printf("%d", Y);
    } else {
        printf("Both numbers are equal.");
    }
    return 0;
}