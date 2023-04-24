#include <stdio.h>
#include <math.h>

// Funciones para calcular el área y el perímetro del círculo
float areaCirculo(float radio) {
    return (3.14) * pow(radio, 2);
}

float perimetroCirculo(float radio) {
    return 2 * (3.14) * radio;
}

// Funciones para calcular el área y el perímetro del triángulo
float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

float perimetroTriangulo(float lado1, float lado2, float lado3) {
    return lado1 + lado2 + lado3;
}

// Funciones para calcular el área y el perímetro del rectángulo
float areaRectangulo(float base, float altura) {
    return base * altura;
}

float perimetroRectangulo(float base, float altura) {
    return 2 * (base + altura);
}

// Funciones para calcular el área y el perímetro del cuadrado
float areaCuadrado(float lado) {
    return pow(lado, 2);
}

float perimetroCuadrado(float lado) {
    return 4 * lado;
}

// Funciones para calcular el área y el perímetro del trapecio
float areaTrapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}

float perimetroTrapecio(float lado1, float lado2, float lado3, float lado4) {
    return lado1 + lado2 + lado3 + lado4;
}

int main() {
    int opcion;
    float radio, base, altura, lado1, lado2, lado3, lado4, resultado, baseMenor;
    do {
        printf("\nElija la figura geometrica para realizar el calculo del perimetro y el area:\n\n");
        printf("1. CIRCULO\n");
        printf("2. TRIANGULO\n");
        printf("3. RECTANGULO\n");
        printf("4. CUADRADO\n");
        printf("5. TRAPECIO\n");
        printf("6. SALIR\n");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("\nIngrese el radio del circulo: ");
                scanf("%f", &radio);
                printf("El area del circulo es: %.2f\n", areaCirculo(radio));
                printf("El perimetro del circulo es: %.2f\n", perimetroCirculo(radio));
                break;
            case 2:
                printf("\nIngrese la base del triangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del triangulo: ");
                scanf("%f", &altura);
                printf("El area del triángulo es: %.2f\n", areaTriangulo(base, altura));
                printf("Ingrese el primer lado del triangulo: ");
                scanf("%f", &lado1);
                printf("Ingrese el segundo lado del triangulo: ");
                scanf("%f", &lado2);
                printf("Ingrese el tercer lado del triangulo: ");
                scanf("%f", &lado3);
                printf("El perimetro del triangulo es: %.2f\n", perimetroTriangulo(lado1, lado2, lado3));
            break;
        case 3:
            printf("\nIngrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            printf("El area del rectángulo es: %.2f\n", areaRectangulo(base, altura));
            printf("El perimetro del rectangulo es: %.2f\n", perimetroRectangulo(base, altura));
            break;
        case 4:
            printf("\nIngrese el lado del cuadrado: ");
            scanf("%f", &lado1);
            printf("El area del cuadrado es: %.2f\n", areaCuadrado(lado1));
            printf("El perimetro del cuadrado es: %.2f\n", perimetroCuadrado(lado1));
            break;
        case 5:
            printf("\nIngrese la base mayor del trapecio: ");
            scanf("%f", &base);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &baseMenor);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &altura);
            printf("El area del trapecio es: %.2f\n", areaTrapecio(base, baseMenor, altura));
            printf("Ingrese el primer lado del trapecio: ");
            scanf("%f", &lado1);
            printf("Ingrese el segundo lado del trapecio: ");
            scanf("%f", &lado2);
            printf("Ingrese el tercer lado del trapecio: ");
            scanf("%f", &lado3);
            printf("Ingrese el cuarto lado del trapecio: ");
            scanf("%f", &lado4);
            printf("El perimetro del trapecio es: %.2f\n", perimetroTrapecio(lado1, lado2, lado3, lado4));
            break;
        case 6:
            printf("\nSaliendo del programa...\n");
            break;
        default:
            printf("\nOpcion invalida. Intente de nuevo.\n");
    }
} while(opcion != 6);

return 0;

}
