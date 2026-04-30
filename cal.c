#include <stdio.h>

int main() {
    double num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);

    printf("Suma: %.2lf\n", num1 + num2);
    printf("Resta: %.2lf\n", num1 - num2);
    printf("Multiplicacion: %.2lf\n", num1 * num2);

    return 0;
}