#include<stdio.h>
int main() {
    float width, height, Area;
    printf("Enter width and height of the rectangle: ");
    scanf("%f %f", &width, &height);
    Area = width * height;
    printf("Area of the rectangle: %.2f\n", Area);
    return 0;
}   