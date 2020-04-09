#include <stdio.h>


#define SIM 1
#define NAO 0

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
