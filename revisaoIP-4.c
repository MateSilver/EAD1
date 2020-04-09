#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 4
 * o programa a seguir verifica se um numero de quatro 
 * digitos na entrada e igual a seu inverso
 **/
int inverter(int n){
    int unidade = n%10;
    int dezena  = (n%100)/10;
    int centena = (n%1000)/100;
    int milhar  = n/1000;

    return(unidade*1000 + dezena*100 + centena*10 + milhar);
}

int main(){
    int n;
    int num;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &num);
        if(inverter(num) == num){
            printf("yes ");
        }
        else{
            printf("no ");
        }
    }
}
