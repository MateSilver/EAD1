#include <stdio.h>

char bio(int n){
    char x;
    if(n >= 0 && n<4){
        switch(n){
            case 0:
                x = 'A';
                break;
            case 1:
                x = 'C';
                break;
            case 2:
                x = 'G';
                break;
            case 3:
                x = 'T';
                break;
            default:
                x = NULL;
        }
    }
    return(x);
}

void convertido4 (int n){
    if(n/4 != 0){
        convertido4 (n/4);
    }
    printf("%c", bio(n%4));
}

int main(){
    int n;
    int number;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &number);
        convertido4(number);
        printf("\n");
    }
}
