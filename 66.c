
#include <stdio.h>

int main() {
    int n, i;
    long long prod = 1;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        prod *= arr[i];

    printf("%lld", prod % 10);
    return 0;
}
