/*
Exercício 1 — Triplo
Crie uma função chamada triplo() que receba um número inteiro e retorne o triplo desse número.

No main(), peça um número ao usuário, chame a função e mostre o resultado.

Exemplo:
Digite um número: 8
Triplo: 24
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int triplo(int numero) {
    return numero * 3;
}

int main() {
    int n, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = triplo(n);

    printf("Triplo: %d\n", resultado);
    
}
