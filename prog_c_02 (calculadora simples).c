#include <stdio.h>

int main()
{
    int num1, num2, resposta;
    printf("informe um primeiro número: \n");
    scanf("%d", &num1);
    printf("informe um segundo número: \n");
    scanf("%d", &num2);
    printf("%d %d \n", num1, num2);
    
    printf("digite 1 para soma, 2 para subtração, 3 para multiplicação, ou 4 para divisão: \n");
    scanf("%d", &resposta);
    
    if (resposta == 1){
        int resultado = num1 + num2;
        printf("Resultado: %d", resultado);
    }
    else {
        if (resposta == 2){
            int resultado = num1 - num2;
            printf("Resultado: %d", resultado);
        }
        else{
            if (resposta == 3){
                int resultado = num1 * num2;
                printf("Resultado: %d", resultado);
            }
            else {
                if (num2 == 0){
                    printf("ERRO: divisão por zero.");
                }
                    else{
                        int resultado = num1 / num2;
                        printf("Resultado: %d", resultado);
                    }
                }
            }
        }
    return 0;
}
