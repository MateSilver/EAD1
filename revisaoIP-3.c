#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 3
 * o programa a seguir faz operacoes de soma e multiplicacao
 * verificando se o resultado gera um overflow na maquina 
 * -overflow informado na entrada- ou nao.
 **/
int main(){
    int  pico;
    int  a;
    int  b;
    char c;
    //overflow:
    scanf("%d", &pico);

    scanf("%d", &a);
        getchar();
    c = getchar();
        getchar();
    scanf("%d", &b);

    switch(c){
    case '+':
        if(a+b > pico){
            printf("overflow\n");
        }
        else{
            printf("no overflow\n");
        }
        break;
    case 'x':
        if(a*b > pico){
            printf("overflow\n");
        }
        else{
            printf("no overflow\n");
        }
        break;
    default:
        printf("error\n");
        break;
    }
}
