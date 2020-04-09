#include <stdio.h>

/**
 * inf/UFG - AED1: lista de exercicios de revisao de IP - 7
 * O programa a seguir marca um vetor com posicoes representando
 * sapos em pedras de um riacho, a partir da posicao e distancia
 * do pulo de cada sapo, ele marca os possiveis lugares onde os 
 * sapos podem estar apos possiveis pulos
 **/
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

    scanf("%d", &n);//numero de casos
    while(n--){
        scanf("%d", &posicao);
        scanf("%d", &pulo);

        Frog(v,posicao-1,pulo,tam);
    }
    for(i=0; i<tam; i++){
        printf("%d\n", v[i]);
    }
}
