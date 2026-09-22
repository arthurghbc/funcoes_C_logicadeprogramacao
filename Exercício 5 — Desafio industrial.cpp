/*
Exercício 5 — Desafio industrial
Crie uma função chamada calcularProducao() que receba:
- quantidade de peças produzidas;
- quantidade de peças aprovadas.

A função deverá calcular e retornar a porcentagem de peças aprovadas.

Exemplo:
Quantidade produzida: 500
Quantidade aprovada: 475

Percentual de aprovação: 95.00%
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularProducao(int produzidas, int aprovadas) {
    return ((float)aprovadas / produzidas) * 100.0;
}

int main() {
    int prod, aprov;
    float percentual;

    printf("Quantidade produzida: ");
    scanf("%d", &prod);

    printf("Quantidade aprovada: ");
    scanf("%d", &aprov);

    percentual = calcularProducao(prod, aprov);

    printf("\nPercentual de aprovacao: %.2f%%\n", percentual);
    
}
