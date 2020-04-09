#include <stdio.h>

int main(){
    int  pico;
    int  a;
    int  b;
    char c;

    scanf("%d", &pico);

    scanf("%d", &a);
    getchar();
    c = getchar();
    getchar();
    scanf("%d", &b);

    switch(c){
    case '+':
        if(a+b > pico){
            printf("overflow\n");
        }
        else{
            printf("no overflow\n");
        }
        break;
    case 'x':
        if(a*b > pico){
            printf("overflow\n");
        }
        else{
            printf("no overflow\n");
        }
        break;
    default:
        printf("error\n");
        break;
    }
}
