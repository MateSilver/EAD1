#include <stdio.h>


#define SIM 1
#define NAO 0
/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 8
 * O programa a seguir verifica se o numero da entra é primo
 * ou nao e exibe o resultado na tela
 **/
int primo(int n){
    int i = 2;

    if(n > 1){
        while(i < n){
            if(n%i == 0){
                return(NAO);
            }
            i++;
        }
        return(SIM);
    }
    return(NAO);
}

int main(){
    int n;
    int numero;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &numero);
        if (primo(numero) == SIM){
            printf("primo\n");
        }
        else{
            printf("composto\n");
        }
    }
}
