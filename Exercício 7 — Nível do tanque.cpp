/*
Exercício 7 — Nível do tanque
Crie um programa para monitorar o nível de um tanque industrial.

A função deve receber o nível do tanque em porcentagem e retornar:
- "Nível baixo" se for menor que 30%
- "Nível adequado" entre 30% e 80%
- "Nível crítico" acima de 80%

No main(), peça o nível ao usuário e exiba a situação retornada pela função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* monitorarTanque(float porcentagem) {
    if (porcentagem < 30.0) {
        return "Nivel baixo";
    } else if (porcentagem <= 80.0) {
        return "Nivel adequado";
    } else {
        return "Nivel critico";
    }
}

int main() {
    float nivel;

    printf("Digite o nivel do tanque (%%): ");
    scanf("%f", &nivel);

    printf("Situacao: %s\n", monitorarTanque(nivel));
    
}
