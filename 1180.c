#include <studio.h>

int main() {
	int N,i,n,menor;
	scanf("%d", &N);
	int X[N];

	for(i = 0; i < N; i++)
	{
		scanf("%d", &X[i]);
	}
	
	menor = 0;
	for(i = 1; i < N; i++)
	{
	    if (X[i] < X[menor])
	    {
	        menor = i;
	    }
	}

	printf("Menor valor: %d\n", X[menor]);
	printf("Posicao: %d\n", (menor));

	return 0;
}
