#include <stdio.h>

int bubbleSort(int* v, int n){
	int i, j;
	int cont = 0;
    if (n < 1){
		return 0;
	}

    for (i=0; i<n-1; i++){
        if (v[i] > v[i+1]){
			v[i] += v[i+1];
			v[i+1] = v[i] - v[i+1];
			v[i] -= v[i+1];
			cont++;
			/*for(j=0; j< n; j++){
                printf("%d ", v[j]);
            }
            printf("\n");*/
		}
	}
    return(cont + bubbleSort(v, n-1));
}

int main(){
    int n;//casos teste
    int tam;//tamanho dos vetores
    int i;//contador

    scanf("%d", &n);

    while(n--){
        scanf("%d", &tam);
        int vetor[tam];
        for(i=0; i<tam; i++){
            scanf("%d", &vetor[i]);
        }
        printf("%d\n", bubbleSort(vetor,tam));
    }
}
