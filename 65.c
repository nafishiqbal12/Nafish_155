#include <stdio.h>

int main() {
    int n, q = 0;
    scanf("%d", &n);

    while(n % 10 == 0) {
        n /= 10;
        q++;
    }

    printf("%d x 10 ^ %d", n, q);
    return 0;
}
