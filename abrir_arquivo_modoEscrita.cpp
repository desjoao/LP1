//
// Created by João on 16/05/2024.
//
#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("arquivo_escrita.txt", "w");

    char escrita[] = "Hello, world.";

    fwrite(escrita, 1, sizeof(escrita), fptr);
    fclose(fptr);

    fptr = fopen("arquivo_escrita.txt", "r");
    char leitura[100];
    if (fptr != NULL){
        fgets(leitura, 100, fptr);
        printf("\n %s", leitura);
    }
    fclose(fptr);
    return 0;
}