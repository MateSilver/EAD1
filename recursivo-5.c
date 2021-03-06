#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 5
 * o programa a seguir faz a conversao de um numero decimal 'n'
 * da entrada, em seu respectivo numero em base binaria
 */
void binarios(int n){
    if(n/2 == 0){
        printf("%d", n%2);
        return;
    }
    binarios(n/2);
    printf("%d", n%2);
}

int main(){
    int n;
    int numero;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &numero);
        binarios(numero);
        printf("\n");
    }
}

