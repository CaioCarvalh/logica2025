#include <stdio.h>

int main()
{
    int C,N,T;
    scanf("%d %d", &C, &N);
    
    T = C % N;
    
    printf("%d\n", T);
    
    return 0;
}
