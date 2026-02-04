#include <stdio.h>

int main() {
    int a, b, i;
    long long result = 1;

    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++) {
        result *= a;
    }

    printf("%lld", result);
    return 0;
}
