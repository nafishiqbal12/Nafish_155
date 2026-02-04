
#include <stdio.h>

int main() {
    char str[300];
    int i, count = 0;

    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
    }

    printf("%d", count);
    return 0;
}
