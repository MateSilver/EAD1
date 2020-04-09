#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 1
 * o programa a seguir usa a recursão pra exibir na tela uma contagem
 * crescente de 'n' numeros a partir de uma entrada 'n'
 **/

void print(int n){
    if(n == 0){
        return;
    }
    print(n-1);
    printf("%d ", n);
    return;
}

int main(){
    int n;
    scanf("%d", &n);

    print(n);
}

