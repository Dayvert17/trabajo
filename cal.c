#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);

    printf("Suma: %.2lf\n", num1 + num2);
    printf("Resta: %.2lf\n", num1 - num2);
    printf("Multiplicacion: %.2lf\n", num1 * num2);

    if(num2 != 0) {
        printf("Division: %.2lf\n", num1 / num2);
    } else {
        printf("No se puede dividir entre 0\n");
    }

    printf("Potencia: %.2lf\n", pow(num1, num2));

    return 0;
}