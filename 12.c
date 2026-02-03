#include<stdio.h>


int main() {
    float amount, finalAmount;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 1000) {
        finalAmount = amount - (amount * 0.10);
    } else {
        finalAmount = amount;
    }

    printf("Final amount to pay: %.2f", finalAmount);

    return 0;
}
