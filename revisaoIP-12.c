#include <stdio.h>
#define max 100
/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 12
 * programa para exibir inversos e transpostas de matrizes
 * ---ainda em desenvolvimento---
 **/
void readMatriz(int matriz[][max], int m, int n){
    int i;
    int j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}
void PrintTrans(int matriz[][max], int m,int n){
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);

    int matriz[m][n];
    readMatriz(matriz,m,n);
    getchar();
    char c = getchar();
    if(c == 'I'){
        PrintInverte(matriz,m,n);
    }
    else{
        PrintTrans(matriz,m,n);
    }
}
