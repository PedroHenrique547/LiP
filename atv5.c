#include <stdio.h>
#include <string.h>

int main() {
    char texto[200];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int tamanho = strlen(texto);

    if(texto[tamanho-1] == '\n') {
        tamanho--;
    }

    printf("Quantidade de caracteres: %d\n", tamanho);

    return 0;
}