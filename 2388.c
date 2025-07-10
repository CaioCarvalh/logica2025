#include <stdio.h>
#include <math.h>

int main()
{
    int N,T,V;
    int Distancia = 0;
    scanf("%d", &N);
    for(int i = 0;i < N;i++)
    {
        scanf("%d %d", &T, &V);
        Distancia = (Distancia + (T * V));
    }
    printf("%d\n", Distancia);
    return 0;
}
