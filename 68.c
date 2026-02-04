
#include <stdio.h>

int main() {
    int n, x = 1;
    scanf("%d", &n);

    while(1) {
        int m = n - x;
        if(m > 0 && (m & (m - 1)) == 0)
            break;
        x++;
    }

    printf("%d", x);
    return 0;
}
