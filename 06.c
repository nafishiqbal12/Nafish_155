#include<stdio.h>
int main(){
    int A, B, C, product;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);
    product = A * B * C;
    printf("Product of %d, %d and %d is %d\n", A, B, C, product);
    return 0;   
    
}