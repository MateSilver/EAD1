#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 2
 * o programa a seguir verifica qual o maior dentre dois
 * numeros invertidos de 3 digitos, invertendo a entrada de
 *  'n' e 'm'
 **/
int inverter(int n){
    int unidade = n%10;
    int dezena  = (n%100)/10;
    int centena = n/100;

    return(unidade*100 + dezena*10 + centena);
}

int main(){
    int n;
    int m;

    scanf("%d", &n);
    scanf("%d", &m);

    if(inverter(n) > inverter(m)){
        printf("%d\n", inverter(n));
    }
    else{
        printf("%d\n", inverter(m));
    }
}
