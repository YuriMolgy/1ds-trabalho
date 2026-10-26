#include <stdio.h>
#include <stdlib.h>

int main() {

int contador,turma;
    
    printf("Qual é o tamanho da turma?\n");
    scanf("%d",&turma);

int var [turma];
contador=0;

    while(contador!= turma)
    {
        var[contador]=contador+1;
        printf("var[%d",contador);
        printf("]%d",var[contador]);
        contador++;
    }

 }
