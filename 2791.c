#include <stdio.h>

int main() {
    int c1, c2, c3, c4;

    scanf("%d %d %d %d", &c1, &c2, &c3, &c4);

    if (c1 == 1) {
        printf("1\n");
    } else if (c2 == 1) {
        printf("2\n");
    } else if (c3 == 1) {
        printf("3\n");
    } else {
        printf("4\n");
    }

    return 0;
}
