#include <stdio.h>

void PrintTrans(int* matriz, int m,int n){
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
    readMatriz(matriz);
    getchar();
    char c = getchar();
    if(c == 'I'){
        PrintInverte(matriz,m,n);
    }
    else{
        PrintTrans(matriz,m,n);
    }
}
