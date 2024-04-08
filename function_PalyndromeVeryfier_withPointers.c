//
// Created by João on 06/04/2024.
//
#include <stdio.h>

//função que analisa se uma string é um palíndromo.
void verify (char str[], int n) {
    int i, j, *p;
    char *q;
    q = str;
    p = &n;
    for (i = 0; i < *p; i++){
        j = *p-i-1;
        if (q[i] != q[j]) {
            printf("not palyndrome");
            break;
        }
        else
        {
            if (i >= j) {
                printf("palyndrome!");
                break;
            }
        }
    }
}

//Programa que recebe de entrada o tamanho de uma string e seu conteudo, então chama a função de
//verificação se a string é um palíndromo.
int main(){
    int n;
    printf("Insira o tamanho da string:");
    scanf("%d", &n);

    char string[n];
    printf("Insira a string:\n");
    scanf("%s", string);

    verify (string, n);
    return 0;
}
