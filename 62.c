
#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int i, len;
    scanf("%s", num);

    len = strlen(num);

    for(i = 0; i < len - 1; i++) {
        if(num[i] < num[i + 1])
            break;
    }

    for(int j = 0; j < len; j++) {
        if(j != i)
            printf("%c", num[j]);
    }

    return 0;
}
