#include <stdio.h>

int main()
{
    int N;
    char nota;
    scanf("%d", &N);
    if (N == 0)
    {
        nota = 'E';
    }
    
    if (N >= 1 && N <= 35)
    {
        nota = 'D';
    }
    
    if (N >= 36 && N <=60)
    {
        nota = 'C';
    }
    
    if (N >= 61 && N <= 85)
    {
        nota = 'B';
    }
    
    if (N >= 86 && N <=100)
    {
        nota = 'A';
    }
    
    printf("%c\n", nota);
    
    return 0;
}
