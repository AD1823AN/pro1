#include <stdio.h>
int main() {
    char operador;
    double num1, num2, resultado;
    // Solicitar al usuario que ingrese la operación
    printf("Introduce un operador (+, -, *, /): ");
    scanf("%c", &operador);
    // Solicitar al usuario que ingrese dos números
    printf("Introduce dos números: ");
    scanf("%lf %lf", &num1, &num2);
    // Calcular el resultado según el operador ingresado
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Error: División por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no válido.\n");
            break;
    }

    return 0;
}
