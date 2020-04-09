#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 9
 * programa usando a recursividade para exibir um numero da
 * posicao 'm' da sequencia de fibonacci
 **/
double makefibonacci (int n){
    if(n == 0){
        return(0);
    }
    if(n == 1){
        return(1);
    }
	    return(makefibonacci(n-1) + makefibonacci(n-2));
}

int main(){
    int n;
    int m;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        printf("%.0lf\n", makefibonacci(m));
    }
}

