#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int chegada;
    int critico;
    struct lista * prox;
}lista;

int main(){
    lista * fila;
    fila = (lista*)malloc(sizeof(lista));

    int n;
    int i=0;

    int hora;
    int minuto;
    int critico;

    int atendimento = 7*60;
    int mortos = 0;

    lista * aux = fila;
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &hora);
        scanf("%d", &minuto);
        scanf("%d", &critico);

        aux->chegada    = (hora*60) + minuto;
        aux->critico  = (hora*60) + minuto + critico;

        aux->prox = (lista*)malloc(sizeof(lista));

        aux = aux->prox;
        i++;
    }
    i=0;
    aux = fila;
    while(i<n){
        //printf("analise\n");
        if(aux->chegada > atendimento){
            while(aux->chegada > atendimento){
                //printf("horario vago\n");
                atendimento += 30;
            }
            //printf("atendido %d:%d\n", aux->chegada/60, aux->chegada%60);
            atendimento += 30;
        }
        else{
            if(aux->chegada < atendimento){
                if(aux->critico < atendimento){
                    //printf("ja morto\n");
                    mortos++;
                }
                else{
                    //printf("atendido %d:%d\n", atendimento/60, atendimento%60);
                    atendimento += 30;
                }
            }
            else{
                    //printf("atendido%d:%d\n", atendimento/60, atendimento%60);
                    atendimento += 30;
                }
        }
        aux = aux->prox;
        i++;
    }
    printf("%d", mortos);
}
