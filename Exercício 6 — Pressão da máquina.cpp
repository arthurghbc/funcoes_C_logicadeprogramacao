/*
Exercício 6 — Pressão da máquina
Crie um programa para monitorar a pressão de uma máquina industrial.

Crie uma função que receba a pressão em PSI e retorne:
- "Pressão normal" se a pressão for <= 100 PSI
- "Atenção" se estiver entre 101 e 150 PSI
- "PERIGO" se for acima de 150 PSI

No main(), solicite a pressão ao operador e exiba a mensagem retornada pela função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* monitorarPressao(float psi) {
    if (psi <= 100.0) {
        return "Pressao normal";
    } else if (psi <= 150.0) {
        return "Atençao";
    } else {
        return "PERIGO";
    }
}

int main() {
    float pressao;

    printf("Digite a pressao da maquina (PSI): ");
    scanf("%f", &pressao);

    printf("Status: %s\n", monitorarPressao(pressao));
    
}
