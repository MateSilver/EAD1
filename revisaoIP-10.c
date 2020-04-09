#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int A_circulo(){
    int r;

    scanf("%d", &r);
    return(round(r*r*pi));
}

int A_triangulo(){
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int p = (int)(a+b+c)/2;
    return(round(sqrt(p*(p-a)*(p-b)*(p-c))));
}

int A_trapezio(){
    int B;
    int b;
    int h;

    scanf("%d", &B);
    scanf("%d", &b);
    scanf("%d", &h);

    return(round(((b+B)*h)/2));
}

int A_elipse(){
    int R;
    int r;

    scanf("%d", &R);
    scanf("%d", &r);

    return(round(R*r*pi));
}

int main(){
    int  n;
    char c;

    scanf("%d", &n);

    while(n--){
        getchar();
        c = getchar();
        switch(c){
    case 'Z':
        printf("%d\n", A_trapezio());
        break;
    case 'T':
        printf("%d\n", A_triangulo());
        break;
    case 'C':
        printf("%d\n", A_circulo());
        break;
    case 'E':
        printf("%d\n", A_elipse());
        break;
    default:
        printf("erro\n");
        break;
        }
    }
}
