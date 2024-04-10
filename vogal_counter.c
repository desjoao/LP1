//
// Created by João on 10/04/2024.
//
#include <stdio.h>
#include <string.h>

int main()
{
    char *palavra = "Club de Regatas Vasco da Gama";
    int tam = strlen(palavra), cont = 0;

    for (int i=0; i<tam; i++){
        if (*palavra == 'a')
            cont+=1;
        if (*palavra == 'e')
            cont+=1;
        if (*palavra == 'i')
            cont+=1;
        if (*palavra == 'o')
            cont+=1;
        if (*palavra == 'u')
            cont+=1;
        palavra++; // para ir de caracter em caracter contido na string.
    }
    printf("There is %d vogals in the given word.", cont);

    return 0;
}
