#include <stdio.h>
#include <stdlib.h>

/*Utilizando procedimentos e/ou funções, faça um programa em C que manipule umafila.
O programa deve ter um menu principal com as seguintes opções:
1 -Inserir elementos na fila
2 -Retirar elementos na fila
3 -Verificar o elemento que está na saída da fila
4 -Mostrar todos os elementos da fila.
5 –Sair */

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

void mostrarFila(Fila *F){
    for(int i=F->inicio;i<F->fim;i++){
        printf("\nElemento %d: %d",i,F->item[i]);
    }
}

int retornaFinal(Fila *F){
    return F->item[F->inicio];
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
    int opcao,valor;
    Fila f;
    Inicia(&f);
    do
    {
        printf("\n Digite uma opcao: \n1 -Inserir elementos na fila \n2 -Retirar elementos na fila \n3 -Verificar o elemento que está na saída da fila \n4 -Mostrar todos os elementos da fila. \n5 –Sair\n");
        scanf("%d",&opcao);
        if(opcao == 1){
            printf("\nDigite o valor: ");
            scanf("%d",&valor);
            Insere(&f,valor);
        }
        else if(opcao == 2){
            Remove(&f,&valor);
        }
        else if(opcao == 3){
            printf("\nElemento na saida: %d", retornaFinal(&f));
        }
        else if(opcao == 4){
            mostrarFila(&f);
        }
        else if(opcao == 5){
            printf("\nSaindo");
        }
        else{
            printf("\nComando invalido");
        }
    }
    while(opcao !=5);
}
