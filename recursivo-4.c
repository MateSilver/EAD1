#include <stdio.h>
#include <math.h>

void reversal(int n){
    if(n/10 == 0){
        if(n%10 != 0){
            printf("%d", n%10);
        }
        return;
    }
    else{
        while(n%10 == 0){
            n = n/10;
        }
        printf("%d", n%10);
        reversal(n/10);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    reversal(n);
}

