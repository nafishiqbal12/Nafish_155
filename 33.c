#include <stdio.h>

int larger(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", larger(x, y));
    return 0;
}
