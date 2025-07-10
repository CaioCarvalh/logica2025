#include <studio.h>

int main() {
    int N,notas;
    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &N);
    printf("%d\n", N);
    for(int i = 0;i < 7;i++)
    {
        notas = N / cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", notas, cedulas[i]);
        N = N % cedulas[i];
    }
    return 0;
}
