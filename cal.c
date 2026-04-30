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
        printf("Residuo: %.2lf\n", fmod(num1, num2));
    } else {
        printf("No se puede dividir entre 0\n");
    }

    printf("Potencia: %.2lf\n", pow(num1, num2));

    if(num1 > num2) {
        printf("El primero es mayor\n");
    } else if(num1 < num2) {
        printf("El segundo es mayor\n");
    } else {
        printf("Son iguales\n");
    }

    int inicio = (int)(num1 < num2 ? num1 : num2);
    int fin = (int)(num1 > num2 ? num1 : num2);

    printf("Numeros entre ellos:\n");
    for(int i = inicio + 1; i < fin; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}