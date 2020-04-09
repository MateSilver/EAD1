#include <stdio.h>
#include <stdlib.h>

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

    scanf("%d", &n);
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
