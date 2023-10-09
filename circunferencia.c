#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.15169;
    double radio;
    double circunferencia;

    printf("Calcula la circunferencia de un circulo\n");

    printf("Introduce el radio del circulo: ");
    scanf("%lf", &radio);

    circunferencia = 2 * PI * radio;

    printf("La circunferencia del circulo radio %.2lf, es: %.2lf",radio,circunferencia);



    return 0;
}