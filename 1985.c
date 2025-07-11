#include <stdio.h>

int main() {
    int p, i;
    int codigo, quantidade;
    double total = 0.0;

    scanf("%d", &p);

    for (i = 0; i < p; i++) {
        scanf("%d %d", &codigo, &quantidade);

        switch (codigo) {
            case 1001:
                total += 1.50 * quantidade;
                break;
            case 1002:
                total += 2.50 * quantidade;
                break;
            case 1003:
                total += 3.50 * quantidade;
                break;
            case 1004:
                total += 4.50 * quantidade;
                break;
            case 1005:
                total += 5.50 * quantidade;
                break;
        }
    }

    printf("%.2f\n", total);

    return 0;
}
