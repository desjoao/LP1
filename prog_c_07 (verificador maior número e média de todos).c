#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z,  media; 
    
    printf("Insira tres valores: ");
    scanf("%f %f %f", &x, &y, &z);
    media = (x + y + z)/ 3;
    if (x >= y) {
        if (x >= z){
            printf("O maior numero e %.0f \n", x);
            printf("A media e %.1f", media);
        }
        else{
        printf("O maior numero e %.0f \n", z);
        printf("A media e %.1f", media);
        }
    }
    else {
        if (y >= z){
            printf("O maior numero e %.0f \n", y);
            printf("A media e %.1f", media);
        }
        else{
            printf("O maior numero e %.0f \n", z);
            printf("A media e %.1f", media);
    
        }    
    }
    return 0;
}

