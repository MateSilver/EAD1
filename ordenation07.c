#include <stdio.h>
#define TRUE 1
#define FALSE 0

int particiona(int *v,int inicio,int fin){
    int esq, dir, pivo, aux;
    pivo = v[inicio];//recebe primeiro valor

    esq = inicio;
    dir = fin;
    while(esq<dir){
            while(v[esq] <= pivo){esq++;}
            while(v[dir] > pivo){dir--;}
        if(esq<dir){
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    if(dir > inicio){
        aux = v[inicio];
        v[inicio] = v[dir];
        v[dir] = aux;
    }

    return(dir);
}
void quick_sort(int *v,int ini,int fin){
    int pivo;
    if(ini<fin){
        pivo = particiona(v,ini,fin);
        quick_sort(v,ini,pivo-1);
        quick_sort(v,pivo+1,fin);
    }
    return;
}

int Nprime(int n,int valor){
    if(n<=0){
        return valor-1;
    }
    else{
        if(prime(valor) == TRUE){
            return (Nprime(n-1,valor+1));
        }
        else{
            if(prime(valor) == FALSE){
                return (Nprime(n,valor+1));
            }
        }
    }
}

int prime(int n){
    int i = 2;
    if(n<2){
        return FALSE;
    }
    while(i<n){
        if(n%i == 0){
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

int main(){
    int n;
    int i;
    scanf("%d", &n);
    int v[n];

    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    quick_sort(v,0,n-1);
    for(i=0; i<n; i++){
        //printf("%d ", v[i]);
        printf("%d ", Nprime(v[i],1));
    }
    printf("\n");
}
