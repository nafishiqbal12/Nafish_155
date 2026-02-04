#include <stdio.h>

int main() {
    float weight, height, bmi;
    scanf("%f %f", &weight, &height);

    bmi = weight / (height * height);
    printf("%.3f", bmi);

    return 0;
}
