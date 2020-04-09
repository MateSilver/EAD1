#include <stdio.h>


int inverter(int n){
    int unidade = n%10; // /*teste*/cout << unidade << endl;
    int dezena  = (n%100)/10; // /*teste*/cout << dezena << endl;
    int centena = n/100; // /*teste*/cout << centena << endl;

    return(unidade*100 + dezena*10 + centena);
}

int main(){
    int n;
    int m;

    scanf("%d", &n);
    scanf("%d", &m);

    if(inverter(n) > inverter(m)){
        printf("%d\n", inverter(n));
    }
    else{
        printf("%d\n", inverter(m));
    }
}
