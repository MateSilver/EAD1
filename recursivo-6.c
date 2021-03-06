#include <stdio.h>
#define SIM 1
#define NAO 0

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 6
 * o programa a seguir faz o fatorial duplo de 'n' primeiros
 * numeros impares da entrada, exibindo a multiplicacao dos 
 * numeros impares ate n
 */
int impar(int n){
    if(n%2 == 0){
        return(NAO);
    }
    return(SIM);
}

double fatorialduplo(double n){
    if(n==1){
        return(n);
    }
    if(impar(n) == SIM){
        return(n*fatorialduplo(n-2));
    }
    else{
        return(fatorialduplo(n-1));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%.0lf\n", fatorialduplo(n));
}

