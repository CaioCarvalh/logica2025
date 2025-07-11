#include <stdio.h>

int main() {
    int x;
    long long m;

    while (1) {
        scanf("%d %lld", &x, &m);
        if (x == 0 && m == 0) {
            break;
        }
        printf("%lld\n", x * m);
    }

    return 0;
}
