#include <stdio.h>
/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 1
 * o programa a seguir calcula o proximo ano de passagem
 * do cometa Harley a partir de um ano dado na entrada,
 * usando o marco de passagem do harley de 1986
 **/

//a cada 76 anos da passagem do harley sao 19 dias de desvio
//devido ao ano bissexto a cada 4 anos

int upyear(int ano,int marco, int desvio){
    if(ano < marco+(desvio/365)){
        return(marco+desvio/365);
    }
        upyear(ano,marco+76,desvio+19);
}

int downyear(int ano,int marco,long int desvio){
    if(ano >= marco-76-(desvio/365)){
        return(marco-(desvio/365));
    }
        downyear(ano,marco-76,desvio+19);
}

int main(){
    int ano;

    scanf("%d", &ano);
    if(ano > 1986){
        printf("%d",  upyear(ano,1986,0));
    }
    else{
        printf("%d", downyear(ano,1986,0));
    }
}
