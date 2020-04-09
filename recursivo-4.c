#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de recursividade - 4
 * o programa a seguir retorna a partir de uma entrada de um
 * numero 'n', seu inverso, sem zeros á esquerda
 **/
void reversal(int n){
    if(n/10 == 0){//ultimo digito (n<10)
        if(n%10 != 0){
            printf("%d", n%10);
        }
        return;
    }
    else{
        while(n%10 == 0){//proximo digito == 0
            n = n/10;
        }
        printf("%d", n%10);
        reversal(n/10);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    reversal(n);
}

