#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 3
 * o programa a seguir implementa o conceito da recursao da funcao de ackerman
 *  a partir da entrada de 'm' e 'n' 
 **/
int ackermann(int m, int n){
    if(m == 0){
        return(n+1);
    }
    if(n == 0 && m > 0){
        return(ackermann(m-1,1));
    }
    if(m > 0 && n > 0){
        return(ackermann(m-1,ackermann(m,n-1)));
    }
}

int main(){
    int n, m;
    scanf("%d", &m);
    scanf("%d", &n);

    printf("%d\n", ackermann(m,n));
}
