//
// Created by Alysson on 13/10/2024.
//
//1) Observe o trecho de código:
//
//int INDICE = 12, SOMA = 0, K = 1;
//enquanto K < INDICE faça
//{ K = K + 1; SOMA = SOMA + K;}
//
// imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA?
// RESPOSTA: 77
#include<stdio.h>

int main() {
    int INDICE = 12, SOMA =0, K = 1;
    while(K<INDICE) {

        K= K+1;
        SOMA = SOMA +  K ;
    }

    printf("%d\n",SOMA);
}