#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct No{
    char *item;
    struct No *proximo;
}No;

No *Push(No *atual,No dados){
    No *novo=(No*)malloc(sizeof(No));
    novo->item=dados.item;
    novo->proximo=atual;
    atual=novo;

    return atual;
}
No *Pop(No *atual){
    atual=atual->proximo;

    return atual;
}
void Print(No *atual){

    printf("----------------------Pilha------------------------------\n");
    if(atual==NULL){
        printf("Lista vazia\n");
    }else{
        while(atual!=NULL){
            printf("item:%s\n",atual->item);

            atual=atual->proximo;
        }
    }
        printf("----------------------Pilha------------------------------\n");
}
int main(){
    setlocale(LC_ALL,"portuguese");
    No *pilha=NULL;
    No dados;
    int op;

    printf("------------------------------PILHA--------------------------------------\n");
    printf("Bem vindo a sua pilha simples\n");
    

    do{
       
        printf("[1]:Funcao Push(colocar elemento)\n[2]:funcao Pop(remover elemento)\n[3]:imprimir\n[4]:Encerrar\n");
        scanf("%d",&op);

        switch(op){
            case 1:
                dados.item=(No*)malloc(sizeof(No)*20);
                printf("informe o jogo\n");
                scanf("%s",dados.item);
                pilha=Push(pilha,dados);
                break;
            case 2:
                pilha=Pop(pilha);
                break;
            case 3:
                Print(pilha);
                break;
            case 4:
                printf("Finalizandoooo");
                break;
            default:
                printf("Opcao invalida");
               
}
    }while(op!=4);
}