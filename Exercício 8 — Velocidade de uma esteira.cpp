/*
Exercício 8 — Velocidade de uma esteira
Crie um programa para monitorar a velocidade de uma esteira industrial, medida em metros por minuto.

A função deve receber a velocidade e retornar:
- "Velocidade normal" se for <= 50 m/min
- "Atenção: velocidade elevada" entre 51 e 70 m/min
- "PERIGO: velocidade excessiva" acima de 70 m/min
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* monitorarEsteira(float velocidade) {
    if (velocidade <= 50.0) {
        return "Velocidade normal";
    } else if (velocidade <= 70.0) {
        return "Atencao: velocidade elevada";
    } else {
        return "PERIGO: velocidade excessiva";
    }
}

int main() {
    float vel;

    printf("Digite a velocidade da esteira (m/min): ");
    scanf("%f", &vel);

    printf("Status: %s\n", monitorarEsteira(vel));
    
}
