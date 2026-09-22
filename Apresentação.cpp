#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void apresentar(char nome[]) {
    printf("Ola, %s! Seja bem-vindo!\n", nome);
}

int main() {
    apresentar("Carlos");
    apresentar("Ana");
    apresentar("Joao");
    
}
