#include <stdio.h>

void fibonacci(int n,int ant,int atual){
    if(n==0){
        printf("%d", atual);
        return;
    }
    printf("%d ", atual);
    fibonacci(n-1,atual,ant+atual);
}

int main(){
    int n;

    scanf("%d", &n);
    fibonacci(n,1,0);
}
