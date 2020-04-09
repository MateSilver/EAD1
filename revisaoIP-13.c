#include <stdio.h>

unsigned long long int makefibonacci (unsigned long long int ant,unsigned long long int atual, int stop){
    if(stop > 0){
        if(atual == 0){
            makefibonacci(ant,atual+1,(stop-1));
        }
        else{
            makefibonacci(atual,atual+ant,(stop-1));
        }
    }
    else{
        return(atual);
    }
}

int main(){
    int n;
    int m;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        printf("%lu\n", makefibonacci(0,0,m));
    }
}
