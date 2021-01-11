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

void elevarImpares(int* v, int n){
	int i;
	int j;
	int cont=0;
    if (n < 1){
		return 0;
	}

    for (i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if (v[j]%2 != 0){
                v[j] += v[j+1];
                v[j+1] = v[j] - v[j+1];
                v[j] -= v[j+1];
                /*for(j=0; j<n; j++){
                    printf("%d ", v[j]);
                }
                printf("\n");*/
            }
		}
	}
}

int main(){
    int n;
    int i, j;
    scanf("%d", &n);

    int vetor[n];
    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    quick_sort(vetor,0,n-1);
    elevarImpares(vetor,n);
    for(i=0; i<n; i++){
        if(vetor[0]%2 == 0 && vetor[i]%2 == 0){
            printf("%d", vetor[i]);
            if(i<n-1){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
        else{
            if(i>0){
                printf("\n");
            }
            break;
        }
        /*printf("%d", vetor[i]);
        if(i<n-1){
            printf(" ");
        }
        else{
            if(vetor[0]%2 == 0 && vetor[i-1]%2 != 0){
                printf("\n");
            }
        }*/
    }
   /* if(i>0 && i<n){
        printf("\n");
    }*/
    for(i; i<n; i++){

        printf("%d", vetor[i]);
        if(i<n-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
}
