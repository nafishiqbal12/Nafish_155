#include <stdio.h>

int main() {
    char str[200];
    int i, count[26] = {0};

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            count[str[i] - 'A']++;
    }

    for(i = 0; i < 26; i++) {
        if(count[i] > 0)
            printf("%c - %d\n", i + 'A', count[i]);
    }

    return 0;
}
