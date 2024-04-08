#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, i;
    float *vetor, media;

    printf("Insira o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    vetor = (float *) (calloc(tamanho, sizeof(float)));
    media = 0;

    for (i = 0; i < tamanho; i++){
        scanf("%f", &vetor[i]);
        media = media + vetor[i];
    }
    media = media/tamanho;
    printf("%.1f", media);
    free (vetor);
    return 0;
}
