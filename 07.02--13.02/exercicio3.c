#include <stdio.h>
#include <stdlib.h>


/*

* NOME: GUILHERME AFONSO CHRISTINO

* TIA: 32030657

* 3) Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9). Este n�mero deve ser sempre �mpar.

    1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8
        3 4 5 6 7
          4 5 6
            5

*/



#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int n, i, j;

    printf("Digite o numero maximo (deve ser impar!): ");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 ==0){
       printf("Numero invalido.\n");
    }
    else{
        for( i = 0; i<= (n / 2) + 1; i++){
            for ( j = i + 1; j <= n - i; j++ ){
                printf("%d ",j);
            }
                printf("\n");
                for ( j = 0; j < (i + 1) * 2; j++ ){
                    printf(" ");
                }
            }
        }

    return 0;
}

