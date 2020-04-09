#include <stdio.h>

unsigned long int makefibonacci (int n){
    if(n == 0){
        return(0);
    }
    if(n == 1){
        return(1);
    }
	    return(makefibonacci(n-1) + makefibonacci(n-2));
}

int main(){
    int n;
    int m;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        printf("%lu\n", makefibonacci(m));
    }
}

