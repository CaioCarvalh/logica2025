#include <stdio.h>

int main() {
    int porcoes_curupira;
    int porcoes_boitata;
    int porcoes_boto;
    int porcoes_mapinguari;
    int porcoes_iara;


    scanf("%d", &porcoes_curupira);
    scanf("%d", &porcoes_boitata);
    scanf("%d", &porcoes_boto);
    scanf("%d", &porcoes_mapinguari);
    scanf("%d", &porcoes_iara);

    int total_mandioca = (porcoes_curupira * 300) +
                         (porcoes_boitata * 1500) +
                         (porcoes_boto * 600) +
                         (porcoes_mapinguari * 1000) +
                         (porcoes_iara * 150) +
                         225;

    printf("%d\n", total_mandioca);

    return 0;
}
