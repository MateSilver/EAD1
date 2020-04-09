#include <stdio.h>
#include <stdlib.h>
/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 6
 * O programa a seguir conta o numero de balas de determinados
 * tipos, representados como numeros, exibindo o numero minimo
 * de balas de um tipo
 **/
int menor (int v[], int balas){
    int menor=1000;
    int i;
    for(i=1; i<=balas; i++){
        if(menor>v[i]){
            menor = v[i];
        }
    }
    return(menor);
}
int main(){
    int n;
    int i;
    int balas;
    int bala;

    scanf("%d", &n);//numero de balas da entrada
    scanf("%d", &balas);
    int* v = (int*)calloc(balas+1, sizeof(int));
    if(v == NULL){
        printf("erro\n");
    }
    while(n--){
        scanf("%d", &bala);
        for(i=1; i<=balas; i++){
            if(i == bala){
                v[i]++;
            }
        }
    }
    printf("%d", menor(v,balas));
}
