#include <stdio.h>

int main()
{
    int N,resultado;
    resultado = 1;
    scanf("%d", &N);
    while(N > 0)
    {
        resultado = N * resultado;
        N--;
    }
    printf("%d\n", resultado);
    return 0;
}
