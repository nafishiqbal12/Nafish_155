
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    int A = a * c;
    int C = b * d;

    printf("%d %d", A, C);
    return 0;
}
