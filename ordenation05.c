#include <stdio.h>

int selection_sort(int* v, int n){
	int i, j, min, aux;
	int cont=0;
	for (i = 0; i < (n-1); i++){
		min = i;
		for (j = (i+1); j < n; j++){
			if(v[j] < v[min])
				min = j;
		}
		if (v[i] != v[min]){
            v[i] += v[min];
            v[min] = v[i]-v[min];
            v[i] -= v[min];
            cont++;
		}
	}
	return cont;
}

int insertion_sort(int v[], int n){
    int atual = 0, i, j;
    int cont = 0;
    for(i=1; i<n; i++){
        j = i-1;
        atual = v[i];
        while(atual < v[j] && j >= 0){
            v[j+1] = v[j];
            cont++;
            j--;
        }
        v[j+1] = atual;
        cont++;
    }
    return cont;
}

int main(){
    int n;
    scanf("%d", &n);

    int vetor1[n];
    int vetor2[n];
    int i;

    for(i=0; i<n; i++){
        scanf("%d", &vetor1[i]);
        vetor2[i] = vetor1[i];
    }
    int valor1 = insertion_sort(vetor1,n);
    int valor2 = selection_sort(vetor2,n);

    printf("%u", valor1-valor2);
}
