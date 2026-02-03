#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);    
   if(age >= 18){
        printf("You are Eligible.");
    } else {
        printf("You are Not Eligible.");
    }
   
    return 0;
}