#include <stdio.h>

int main()
{
    int m1[3][3], i, j;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (i == j){
            printf("\n %d ", m1[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
