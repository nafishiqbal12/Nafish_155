
#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    char ref[] = "MANDZUKIC";
    int i;

    scanf("%s", s);

    for(i = 0; i < strlen(ref); i++) {
        if(s[i] != ref[i])
            break;
    }

    printf("%d", i);
    return 0;
}
