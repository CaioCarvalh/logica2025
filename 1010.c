#include <studio.h>

int main() {
    
    
    int codigo1,codigo2,numero1,numero2;
    double valor1,valor2,total;
    scanf("%d %d %lf %d %d %lf", &codigo1, &numero1, &valor1, &codigo2, &numero2, &valor2);
    total = numero1 * valor1 + numero2 * valor2;
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
