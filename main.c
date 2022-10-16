#include <stdio.h>

float suma(float, float);
float resta(float, float);
float mult(float, float);
float div(float, float);

unsigned short int flag;
float num1, num2;

int main() {
    printf("Este programa le permitira operar dos numeros.\n");
    do
    {
        printf("Ingrese el primer numero: "); scanf("%f", &num1);
        printf("Ingrese el segundo numero: "); scanf("%f", &num2);
        printf("1. Suma.\n2. Resta.\n3. Multiplicacion.\n4. Division.\nIngrese una opcion:");
        scanf("%d",&flag);

        switch (flag)
        {
        case 1:
            printf("%.4f\n", suma(num1, num2));
            printf("Realizar otra operacion. [0] No, cerrar programa [1] Si: "); scanf("%d", &flag);
            break;

        case 2:
            printf("%.4f\n", resta(num1, num2));
            printf("Realizar otra operacion. [0] No, cerrar programa [1] Si: "); scanf("%d", &flag);
            break;

        case 3:
            printf("%.4f\n", mult(num1, num2));
            printf("Realizar otra operacion. [0] No, cerrar programa [1] Si: "); scanf("%d", &flag);
            break;
        
        case 4:
            printf("%.4f\n", div(num1, num2));
            printf("Realizar otra operacion. [0] No, cerrar programa [1] Si: "); scanf("%d", &flag);
            break;
        
        default:
            printf("Opcion invalida. Intente de nuevo\n");
            flag = 1;
            break;
        }
    } while (flag);
    
    return 0;
}

float suma(float a, float b) {
    return a+b;
}
float resta(float a, float b) {
    return a-b;
}
float mult(float a, float b) {
    return a*b;
}
float div(float a, float b) {
    return a/b;
}