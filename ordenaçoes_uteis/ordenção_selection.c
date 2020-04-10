#include <stdio.h>

void swap_quant(int a,int b){
    a += b;
    b = a-b;
    a -= b;
}
void selection_sort(int* v, int n){
	int i, j, min, aux;
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
		}

	}
}
int main(){
	int n, i;

	scanf("%d", &n);
	int v[n];

	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	getchar();
	selection_sort(v,n);
	for(i=0; i<n; i++){
        printf("%d\n", v[i]);
    }
}

