#include <stdio.h>

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

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    quick_sort(v,0,n-1);
    int minimo1;
    int minimo2;

    scanf("%d", &minimo1);
    scanf("%d", &minimo2);
    /*for(i=0; i<n; i++){
        printf("%d ", v[i]);
    }*/
    printf("%d\n", v[minimo1-1] + v[minimo2-1]);
}
