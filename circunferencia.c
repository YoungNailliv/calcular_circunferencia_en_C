#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.15169;
    double radio;
    double circunferencia;
    double area;

    printf("Calcula la circunferencia de un circulo\n");

    printf("Introduce el radio del circulo: ");
    scanf("%lf", &radio);

    circunferencia = 2 * PI * radio;
    area = PI * radio *radio;

    printf("La circunferencia del circulo radio %.2lf, es: %.2lf\n",radio,circunferencia);
    printf("Su area es: %lf", area);


    return 0;
}