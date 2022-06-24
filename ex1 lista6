#include <stdio.h>

/*Utilizando-se  de  STRUCT,  leia  20  valores  e coloque-os  em  enfilere-os  na FILA1.  
Em  seguida, retire os  elementos  da FILA1  verificando  se  o  valor  a  ser retiradofor < 100 enfilere-o em FILA2, senão enfileire-oem FILA3. */

typedef struct
{
    int item[20];
    int inicio,fim;
} Fila;

void Inicia(Fila *F)
{
    F->inicio=F->fim=0;
}

int Insere(Fila *F,int X)
{
    if(F->fim==100)
        return 0;
    else
    {
        F->item[F->fim]=X;
        F->fim=F->fim+1;
        return 1;
    }
}

int Remove(Fila *F,int *X)
{
    if(F->inicio==F->fim)
        return 0;
    else
    {
        *X=F->item[F->inicio];
        F->inicio=F->inicio+1;
        return 1;
    }
}

void main()
{
    Fila f1;
    Fila f2;
    Fila f3;
    Inicia(&f1);
    Inicia(&f2);
    Inicia(&f3);
}
