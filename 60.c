
#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int len, i;

    scanf("%s", num);
    len = strlen(num);

    for(i = 0; i < len; i++) {
        printf("%c", num[i]);
        if((len - i - 1) % 3 == 0 && i != len - 1)
            printf(",");
    }

    return 0;
}
