#include <stdio.h>
#include <stdlib.h>


/*

* NOME: GUILHERME AFONSO CHRISTINO

* TIA: 32030657

* 2) Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
     Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
     maior ou igual a 9	A
     maior ou igual a 7.5 e menor que 9	B
     maior ou igual a 6 e menor que 7.5	C
     maior ou igual a 4 e menor que 6	D
     menor que 4	E
*/



int main(){
    float N1, N2, N3, MA, ME;

  //Input das notas
    printf("Primeira nota: ");
    scanf("%f",&N1);

    printf("Segunda nota: ");
    scanf("%f",&N2);

    printf("Terceira nota: ");
    scanf("%f",&N3);

    printf("Média das notas dos exercícios realizados: ");
    scanf("%f",&ME);

  //Calcula da media anual
    MA = (N1 + N2*2 + N3*3 + ME)/7 ;

  //Print
    if(MA>=9){
        printf("Nota anual = A");
        }
    else if(MA>=7.5){
        printf("Nota anual = B");
        }
    else if(MA>=6){
        printf("Nota anual = C");
        }
    else if(MA>=4){
        printf("Nota anual = D");
        }
    else{
       printf("Nota anual = E");
        }


    printf("\n");
    return 0;
}

