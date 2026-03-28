#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    int moradores;
} CasaAluguel;

CasaAluguel* criarCasa(int numero, int moradores) {
    CasaAluguel* novacasa = (CasaAluguel*) malloc(sizeof(CasaAluguel));
    novacasa->numero=numero;
    novacasa->moradores=0;
    return novacasa;
}

void alugarCasa(CasaAluguel* this) {
    if(this->moradores ==0){
        this->moradores=1;
        printf("Casa %d alugada pra 1 morador.", this->numero);
    } else {printf("Casa ja foi alugada para %d morador(es).", this->moradores);}
    
}
