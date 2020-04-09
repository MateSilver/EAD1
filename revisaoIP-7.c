#include <stdio.h>

void Frog(int* v, int posicao, int pulo, int tam){
    if(posicao >= 0 && posicao < tam){
        v[posicao] = 1;
        int lugarAtual = posicao;
        while(lugarAtual+pulo < tam){
            v[lugarAtual+pulo] = 1;
            lugarAtual += pulo;
        }
        lugarAtual = posicao;
        while(lugarAtual-pulo >= 0){
            v[lugarAtual-pulo] = 1;
            lugarAtual -= pulo;
        }
    }
    return;
}

void zerarVetor(int vetor[], int n){
	int i;
	for(i=0; i<n; i++){
		vetor[i] = 0;
	}
	return;
}

int main(){
    int posicao;
    int pulo;

    int tam;
    scanf("%d", &tam);

    int v[tam];
    zerarVetor(v,tam);
    int n;
    int i;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &posicao);
        scanf("%d", &pulo);

        Frog(v,posicao-1,pulo,tam);
    }
    for(i=0; i<tam; i++){
        printf("%d\n", v[i]);
    }
}
