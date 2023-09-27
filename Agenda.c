#include "agendastruct.h"
#include "listfunc.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Lista agenda;
    char nome[50];
    agenda.tam = 0;
    agenda.inicio = NULL;
    int opcao,posicao;
    INSERIRMEMORIA(&agenda);

    do{
        printf("\n0-Sair\n");
        printf("1-Adicionar contato na primeira posicao\n");
        printf("2-Adicionar contato na ultima posicao\n");
        printf("3-Adicionar um contato em qualquer posicao\n");
        printf("4-Remover um contato na primeira posicao\n");
        printf("5-Remover um contato na ultima posicao\n");
        printf("6-Remover um contato em qualquer posicao\n");
        printf("7-Editar um contato qualquer\n");
        printf("8-Buscar contato pelo nome\n");
        printf("9-Imprimier lista\n");
        scanf("%d",&opcao);
        switch(opcao){

        case 1:
            INICIO(&agenda); //função operacional
            break;
        case 2:
            FINAL(&agenda);  //função operacional
            break;
        case 3:
            printf("Insira o numero da posicao:"); //função operacional
            scanf("%d",&posicao);
            ADDPOSICAO(&agenda,posicao);
            break;
        case 4:
            REMOVERINICIO(&agenda); // função operacional
            break;
        case 5:
            REMOVERFIM(&agenda);    //função operacional
            break;
        case 6:
            printf("Insira o numero da posicao: "); //função operacional
            scanf("%d",&posicao);
            REMOVERPOSICAO(&agenda,posicao);
            break;
        case 7:
            printf("Insira a posicao do contato:"); //função operacional
            scanf("%d",&posicao);
            EDITAR(&agenda,posicao);
            break;
        case 8:
            printf("Digite o nome:");    //função operacional
            scanf(" %50[^\n]", nome);
            BUSCA(&agenda,nome);       
            break;
        case 9:
            IMPRIMIR(&agenda);      // função operacional
            break;
        case 0:
            printf("Saindo....");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }    
    }while(opcao != 0);
}
