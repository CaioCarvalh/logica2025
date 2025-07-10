#include <studio.h>

int main() {
    float x1,x2,y1,y2;
    double distancia,x,y;
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);
    x = pow((x2 - x1), 2);
    y = pow((y2 - y1), 2);
    distancia = sqrt(x + y);
    printf("%.4lf\n",distancia);
    return 0;
}
