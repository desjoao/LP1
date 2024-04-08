//
// Created by João on 06/04/2024.
//
#include <stdio.h>

void multiply (int array[], int n, int tam){
    int *p, i;
    p = array;
    for (i = 0; i < tam; i++) {
        p[i] = p[i] * n;
    }
    for (i = 0; i < tam; i ++)
        printf("%d\n", p[i]);
}

int main(){
    int tam, n, i;
    printf("Insira o tamanho do vetor:\n");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = 0; i < tam; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Insira o valor do escalar para multiplicar o vetor: \n");
    scanf("%d", &n);

    multiply (vetor, n, tam);
    return 0;
}