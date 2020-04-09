#include <stdio.h>

int somaM(int matriz1[][], int matriz2[][], int n, int m){
    int i;
    int j;
    for(i=0; i<n; i++){
        for(j=0;j<m; j++){
            printf("%d", matriz1[i][j]+matriz2[i][j]);
            if(j==m-1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
}

int MultMatriz(int matriz1[][], int matriz2[][], int n, int m){
    int soma;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0;j<m; j++){
            printf("%d", matriz1[i][j]+matriz2[i][j]);
            if(j==m-1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
}
