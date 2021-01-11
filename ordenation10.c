#include <stdio.h>

typedef struct competidor{
    int sexo;
    int seg;
    int colocacao;
}comp;

int particiona(comp *v,int inicio,int fin){
    int esq, dir, pivo, aux, aux2, aux3;
    pivo = v[inicio].seg;//recebe primeiro valor

    esq = inicio;
    dir = fin;
    while(esq<dir){
            while(v[esq].seg <= pivo){esq++;}
            while(v[dir].seg > pivo){dir--;}
        if(esq<dir){
            aux3 = v[esq].colocacao;
            aux2 = v[esq].sexo;
            aux = v[esq].seg;

            v[esq].colocacao = v[dir].colocacao;
            v[esq].sexo = v[dir].sexo;
            v[esq].seg = v[dir].seg;

            v[dir].colocacao = aux3;
            v[dir].sexo = aux2;
            v[dir].seg = aux;
        }
    }
    if(dir > inicio){
        aux3 = v[inicio].colocacao;
        aux2 = v[inicio].sexo;
        aux = v[inicio].seg;

        v[inicio].colocacao = v[dir].colocacao;
        v[inicio].sexo = v[dir].sexo;
        v[inicio].seg = v[dir].seg;

        v[dir].colocacao = aux3;
        v[dir].sexo = aux2;
        v[dir].seg = aux;
    }

    return(dir);
}
void quick_sort(comp *v,int ini,int fin){
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
    int m;
    int i, j;
    int genero;
    int quant;
    scanf("%d", &n);
    scanf("%d", &m);

    comp v[n];
    for(i=0; i<n; i++){
        scanf("%d", &genero);

        v[i].sexo = genero;
        v[i].seg = 0;
        v[i].colocacao = i+1;
        j = 0;

        while(j<m){
            scanf("%d", &quant);
            v[i].seg += quant;
            j++;
        }
    }
    quick_sort(v,0,n-1);
    /*for(i=0; i<n; i++){
        printf("(%d) %d\n", v[i].seg, v[i].sexo);
    }*/
    for(i=0; i<n; i++){
        if(v[i].sexo == 1){
            printf("%d ", v[i].colocacao);
            break;
        }
    }
    for(i=0; i<n; i++){
        if(v[i].sexo == 2){
            printf("%d", v[i].colocacao);
            break;
        }
    }
}
