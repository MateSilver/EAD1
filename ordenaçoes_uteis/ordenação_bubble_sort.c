#include <stdio.h>

void bubbleSort(int* v, int n){
	int i;
    if (n < 1){
		return;
	}

    for (int i=0; i<n; i++){
        if (v[i] > v[i+1]){
			v[i] += v[i+1];
			v[i+1] = v[i] - v[i+1];
			v[i] -= v[i+1];
		}
	}
    return(bubbleSort(v, n-1));
}
int main(){
	int n,i;
	scanf("%d", &n);

	int v[n];
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}

	bubbleSort(v,n);
	for(i=0; i<n; i++){
        printf("%d\n", v[i]);
	}
}

