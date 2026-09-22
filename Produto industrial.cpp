#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void produto(char nome[]) {
    printf("Produto: %s\n", nome);
    printf("Produto registrado no sistema.\n\n");
}

int main() {
    produto("Motor Eletrico");
    produto("Inversor de Frequencia");
    produto("Valvula Solenoide");
    produto("Sensor Indutivo");
    produto("Painel Eletrico");
    
}
