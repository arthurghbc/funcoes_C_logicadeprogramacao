#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maquina(char nome[]) {
    printf("Maquina: %s\n", nome);
    printf("Sistema iniciado com sucesso!\n\n");
}

int main() {
    maquina("Torno CNC");
    maquina("Prensa Hidraulica");
    maquina("Esteira Industrial");
    
}
