#include <stdio.h>

void binarios(int n){
    if(n/2 == 0){
        printf("%d", n%2);
        return;
    }
    binarios(n/2);
    printf("%d", n%2);
}

int main(){
    int n;
    int numero;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &numero);
        binarios(numero);
        printf("\n");
    }
}

