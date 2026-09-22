/*
Exercício 3 — Área do retângulo
Crie uma função chamada calcularArea() que receba a largura e a altura de um retângulo e retorne sua área.

Use float.

Exemplo:
Digite a largura: 5
Digite a altura: 8

Área: 40.00
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularArea(float largura, float altura) {
    return largura * altura;
}

int main() {
    float l, a, area;

    printf("Digite a largura: ");
    scanf("%f", &l);

    printf("Digite a altura: ");
    scanf("%f", &a);

    area = calcularArea(l, a);

    printf("\nArea: %.2f\n", area);
    
}
