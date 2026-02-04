
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = -100000, second = -100000;

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] < max && arr[i] > second) {
            second = arr[i];
        }
    }

    printf("%d", second);
    return 0;
}
