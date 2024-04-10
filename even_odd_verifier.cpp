//
// Created by João on 10/04/2024.
//
#include <stdio.h>
#include <stdlib.h>

void verifier(int n){
    int *vector, i;

    vector = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++){
        scanf("%d", &vector[i]);
    }
    for (i = 0; i< n; i++){
        if (vector[i]%2 == 1){
            printf("%d is an Odd number.\n", vector[i]);
        }
        else{
            if (vector[i] == 0) {
                printf("%d is 0.\n", vector[i]);
            }
            else{
                printf("%d is an Even number.\n", vector[i]);
            }

        }
    }
    free (vector);

}

int main(){
    int n;
    printf("Insert the size of the array:\n");
    scanf("%d", &n);

    verifier(n);
    return 0;
}