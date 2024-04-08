// Created by João on 05/04/2024.
//
//
#include <stdio.h>
#include <stdlib.h>

// Função para troca de valores de duas variáveis.
void swap (int *a, int *b)
{
    int troca;
    troca = *a; *a = *b; *b = troca;
}

// Programa que recebe a entrada de dois valores e os atribui a duas variáveis.
// Então executa a função de troca e imprime os novos valores das duas variáveis.
int main (){
    int a, b, *p, *q;
    printf("Insira os valores de A e B:");
    scanf("%d %d", &a, &b);
    p = &a; q = &b;
    swap(p, q);
    printf("Os valores de A e B trocados sao %d e %d", a, b);
    return 0;
}