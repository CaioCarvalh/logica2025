#include <stdio.h>
 
int main()
{
    int T;
    int acertos = 0;
    scanf("%d", &T);
    int i[5];
    for(int I = 0;I < 5;I++)
    {
        scanf("%d", &i[I]);
        if(i[I] == T)
        {
            acertos++;
        }
    
    }
    printf("%d\n", acertos);
    return 0;
}
