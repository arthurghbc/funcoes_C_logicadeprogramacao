/*
Exercício 2 — Subtrair
Crie uma função chamada subtrair() que receba dois números inteiros e retorne a subtraçao deles.

No main(), peça os dois números e exiba o resultado.

Exemplo:
Digite o primeiro número: 15
Digite o segundo número: 7

Resultado: 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int subtrair(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, res;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    res = subtrair(num1, num2);

    printf("\nResultado: %d\n", res);
    
}
