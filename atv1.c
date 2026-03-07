#include <stdio.h>
#include <stdbool.h>

int main() {
    bool finish = true;

    while (finish){
        
        int n;
        printf("Digite um número inteiro positivo pra imprimir até ele: ");
        scanf("%d", &n);

        if(n >= 1) {
            for(int i = 1; i <= n; i++) { 
                printf("%d\n", i);
            }    
            finish = false;
            return 0;
        }   
        printf("Por favor, digite um número inteiro positivo.\n");
    }
    return 0;
}