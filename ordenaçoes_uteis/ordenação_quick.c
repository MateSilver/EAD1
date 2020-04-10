#include <stdio.h>

int particiona(int *v,int inicio,int fin)
{
    int esq, dir, pivo, aux;
    pivo = v[inicio];//recebe primeiro valor

    esq = inicio;
    dir = fin;
    while(esq<dir)
    {
            while(v[esq] <= pivo){esq++;}
            while(v[dir] > pivo){dir--;}
        if(esq<dir)//nao passaram
        {
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    if(dir > inicio)
    {
        aux = v[inicio];
        v[inicio] = v[dir];
        v[dir] = aux;
    }

    return(dir);
}
void quick_sort(int *v,int ini,int fin)
{
    int pivo;
    if(ini<fin)
    {
        pivo = particiona(v,ini,fin);
        quick_sort(v,ini,pivo-1);
        quick_sort(v,pivo+1,fin);
    }
    return;
}

int main()
{
    int n,i;
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vetor[i]);
    }
    getchar();
    quick_sort(vetor,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n", vetor[i]);
    }
    getchar();
    return(0);
}
