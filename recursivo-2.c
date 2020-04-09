#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 2
 * O programa a seguir usa a recursividade pra chegar, a partir
 * de entrada de um 'n' inteiro, o número 'n'da sequencia de 
 * fibonacci
 **/

void fibonacci(int n,int ant,int atual){
    if(n==0){
        printf("%d", atual);
        return;
    }
    printf("%d ", atual);
    fibonacci(n-1,atual,ant+atual);
}

int main(){
    int n;

    scanf("%d", &n);
    fibonacci(n,1,0);//'ant' == 1 para inicio do fibonacci => 1 + 0 = 1
}
