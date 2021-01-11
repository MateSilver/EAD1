#include <stdio.h>

int number_max(int v[],int n){
    int i, j;
    int maximo = 0;
    int cont;
    for(i=0; i<n; i++){
        cont = 0;
        for(j=0; j<n; j++){
            if(v[i] == v[j]){
                cont++;
            }
        }
        if(cont > maximo){
            maximo = cont;
        }
    }
    return(maximo);
}

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
    int n, i;
    int a, b;
    int casos;
    scanf("%d", &casos);
    while(casos--){
        scanf("%d", &n);
        int v[n];
        for(i=0; i<n; i++){
            scanf("%d %d", &a, &b);
            v[i] = (a*60)+b;
        }
        quick_sort(v,0,n-1);
        /*for(i=0; i<n; i++){
            printf("%d ", v[i]);
        }*/
        printf("%d\n", number_max(v,n));
    }
}
