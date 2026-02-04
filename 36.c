
#include <stdio.h>

int main() {
    int minutes, hrs, mins;
    scanf("%d", &minutes);

    hrs = minutes / 60;
    mins = minutes % 60;

    printf("%d HRS %d MIN", hrs, mins);
    return 0;
}
