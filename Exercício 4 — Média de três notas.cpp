/*
Exercício 4 — Média de três notas
Crie uma função chamada calcularMedia() que receba três notas e retorne a média.

No main(), mostre a média calculada.

Exemplo:
Digite a nota 1: 70
Digite a nota 2: 80
Digite a nota 3: 90

Média: 80.00

A função deverá retornar um float.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1, nota2, nota3);

    printf("\nMedia: %.2f\n", media);
    
}
