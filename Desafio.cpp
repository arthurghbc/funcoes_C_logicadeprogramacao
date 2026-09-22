#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desafio(char nome[]) {
    printf("========================\n");
    printf("Aluno: %s\n", nome);
    printf("Aula de Linguagem C\n");
    printf("Bons estudos!\n");
    printf("========================\n\n");
}

int main() {
    desafio("Carlos");
    desafio("Ana");
    desafio("Joao");
    
}
