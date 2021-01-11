#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct aluno{
    int nota;
    char* nome;
}fixa;

int particiona(fixa *v,int inicio,int fin){
    int esq, dir, aux2;
    char* aux;
    int pivo = v[inicio].nota;//recebe primeiro valor

    esq = inicio;
    dir = fin;
    while(esq<dir){
            while(v[esq].nota <= pivo){esq++;}
            while(v[dir].nota > pivo){dir--;}
        if(esq<dir){
            /*aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;*/
            aux = (char*)malloc(sizeof(char)*(strlen(v[esq].nome)+1));

            aux = v[esq].nome;
            aux2 = v[esq].nota;

            v[esq].nome = v[dir].nome;
            v[esq].nota = v[dir].nota;

            v[dir].nome = aux;
            v[dir].nota = aux2;
        }
    }
    if(dir > inicio){
        /*aux = v[inicio];
        v[inicio] = v[dir];
        v[dir] = aux;*/
        aux = (char*)malloc(sizeof(char)*(strlen(v[esq].nome)+1));

        aux = v[inicio].nome;
        aux2 = v[inicio].nota;

        v[inicio].nome = v[dir].nome;
        v[inicio].nota = v[dir].nota;

        v[dir].nome = aux;
        v[dir].nota = aux2;
    }

    return(dir);
}
void quick_sort(fixa *v,int ini,int fin){
    int pivo;
    if(ini<fin){
        pivo = particiona(v,ini,fin);
        quick_sort(v,ini,pivo-1);
        quick_sort(v,pivo+1,fin);
    }
    return;
}

void ordena_alpha(fixa v[], int n){
    int i, j, MIN;
	char* aux;
	int aux2;

	for (i = 0; i < (n-1); i++){
        //printf("ordenando\n");
		MIN = i;
		for (j = (i+1); j < n; j++){
			if(strcmp(v[j].nome,v[MIN].nome) < 0){
			    //printf("*");
				MIN = j;
            }
		}
		if (strcmp(v[i].nome,v[MIN].nome) != 0){
		    //printf("|");
            aux = (char*)malloc(sizeof(char)*(strlen(v[MIN].nome)+1));

            aux = v[MIN].nome;
            aux2 = v[MIN].nota;

            v[MIN].nome = v[i].nome;
            v[MIN].nota = v[i].nota;

            v[i].nome = aux;
            v[i].nota = aux2;
		}
	}
}

void selection_sort(fixa* v, int n){
	int i, j, MIN;
	char* aux;
	int aux2;

	for (i = 0; i < (n-1); i++){
		MIN = i;
		for (j = (i+1); j < n; j++){
			if(v[j].nota > v[MIN].nota){
				MIN = j;
            }
		}
		if (v[i].nota != v[MIN].nota){
            aux = (char*)malloc(sizeof(char)*(strlen(v[MIN].nome)+1));

            aux = v[MIN].nome;
            aux2 = v[MIN].nota;

            v[MIN].nome = v[i].nome;
            v[MIN].nota = v[i].nota;

            v[i].nome = aux;
            v[i].nota = aux2;
		}
	}
}

int main(){
    int n;
    int tam;
    int i;
    char buffer[200];

    scanf("%d", &n);
    fixa aluno[n];

    for(i=0; i<n; i++){
        getchar();
        scanf("%s", buffer);

        aluno[i].nome = (char*)malloc(sizeof(char)*(strlen(buffer)+1));
        strcpy(aluno[i].nome,buffer);

        scanf("%d", &aluno[i].nota);
    }
    ordena_alpha(&aluno,n);
    selection_sort(&aluno,n);
    for(i=0; i<n; i++){
        printf("%s ", aluno[i].nome);
        printf("%d", aluno[i].nota);
        if(i == n-1 && n != 0){
            printf(" #reprovado(a)\n");
        }
        else{
            printf("\n");
        }
    }
}
