#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcionario(char nome[]) {
    printf("Funcionario: %s\n", nome);
    printf("Bem-vindo a empresa!\n\n");
}

int main() {
    funcionario("Carlos");
    funcionario("Ana");
    funcionario("Joao");
    funcionario("Mariana");
    
}
