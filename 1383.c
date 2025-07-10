#include <stdio.h>
#include <stdbool.h>


//Lê o tabuleiro do jogo quando inserido por completo
void LerJogo(int jogo[9][9])
{
    for(int i = 0;i < 9;i++)
    {
        for(int j = 0;j < 9;j++)
        {
            scanf("%d", &jogo[i][j]);
        }
    }
}


//Verificar se um vetor qualquer é válido
bool VetorValido(int vetor[9])
{
    bool apareceu[10] = {false};

    for(int i = 0;i < 9;i++)
    {
        int numero = vetor[i];

        if(numero < 1 || numero > 9) return false;
        if(apareceu[numero]) return false;
        apareceu[numero] = true;
    }
    return true;
}


//Verificar se os vetores horizontais são válidos
bool LinhasValidas(int jogo[9][9])
{
    int linha[9];
    for(int i = 0;i < 9;i++)
    {
        for(int j = 0;j < 9;j++)
        {
            linha[j] = jogo[i][j];
        }
        if(!VetorValido(linha)) return false;
    }
    return true;
}


//Verificar se os vetores verticais são válidos
bool ColunasValidas(int jogo[9][9])
{
    int coluna[9];
    for(int j = 0;j < 9;j++)
    {
        for(int i = 0;i < 9;i++)
        {
            coluna[i] = jogo[i][j];
        }
        if(!VetorValido(coluna)) return false;
    }
    return true;
}

bool BlocoValido(int jogo[9][9])
{
    for(int i = 0; i < 9;i += 3)
    {
        for(int j = 0; j < 9; j += 3)
        {
            int vetorbloco[9];
            int l = 0;
            for(int i1 = i; i1 <(i + 3);i1++)
            {
                for(int j1 = j;j1 <(j + 3);j1++)
                {
                    vetorbloco[l] = jogo[i1][j1];
                    l++;
                }
            }
            if(!VetorValido(vetorbloco)) return false;
        }
    }
    return true;
}

int main()
{
    int n;
    int k = 1;
    int jogo[9][9];
    scanf("%d", &n);
    while(n--)
    {
        printf("Instancia %d\n", k);
        LerJogo(jogo);
        if(LinhasValidas(jogo) && ColunasValidas(jogo) && BlocoValido(jogo))
        {
            printf("SIM\n\n");
        }
        else printf("NAO\n\n");
        k++;
    }
    return 0;
}
