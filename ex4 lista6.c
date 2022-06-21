#include <stdio.h>
#include <stdlib.h>

#define MAX 10
typedef struct
{
    int item[MAX];
    int inicio,fim;
} Fila;

void Inicia(Fila *F)
{
    F->inicio=F->fim=0;
}

int Insere(Fila *F,int X)
{
    if(F->fim==MAX)
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
    Fila F1;
    int i,retorno,valor,acm=0,cont=0;
    Inicia(&F1);
    for(i=0; i<MAX; i++)
    {
        printf("\nDigite um numero inteiro : ");
        scanf("%d",&valor);
        retorno=Insere(&F1,valor);
        if(retorno==1)
            printf("Dado inserido !!!\n");
        else
            printf("Fila esta cheia !!!\n");
    }
    for(i=0; i<MAX; i++)
    {
        retorno=Remove(&F1,&valor);
        if(retorno==1)
        {
            if(valor>0 && cont<4){
                acm=acm+valor;
                cont++;
            }
        }
        else
        {
            printf("\nFila esta vazia !!!");
        }
    }
    printf("\nSoma: %d",acm);
}
