#include <stdio.h>

int main() {
    int n, primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n <= 1) {
        primo = 0;
    }

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            primo = 0;
            break;
        }
    }

    if(primo)
        printf("Numero primo\n");
    else
        printf("Nao e primo\n");

    return 0;
}