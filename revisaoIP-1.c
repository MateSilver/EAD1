#include <stdio.h>

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
    int marco=1986;
    int desvio=0;

    scanf("%d", &ano);
    if(ano > marco){
        printf("%d",  upyear(ano,marco,desvio));
    }
    else{
        printf("%d", downyear(ano,marco,desvio));
    }
}
