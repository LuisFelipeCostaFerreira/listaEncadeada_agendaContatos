#ifndef LISTAFUNC_H
#define LISTAFUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agendastruct.h"

typedef struct {
    Contato *inicio;
    int tam;
}Lista;

void INICIO(Lista *agenda){
    Contato * aux = NULL, *novo = (Contato*) malloc(sizeof(Contato));

    if(novo != NULL){

    printf("Nome:");
    scanf(" %50[^\n]", novo->nome);
    printf("Email:");
    scanf(" %30[^\n]", novo->email);
    printf("Rua:");
    scanf(" %30[^\n]", novo->end.rua);
    printf("Numero da casa:");
    scanf(" %d",&novo->end.numero);
    printf("Bairro:");
    scanf(" %50[^\n]", novo->end.bairro);
    printf("Cidade:");
    scanf(" %50[^\n]", novo->end.cidade);
    printf("DDD(telefone fixo):");
    scanf(" %s", novo->fone[0].DDD);
    printf("Numero do telefone fixo:");
    scanf(" %s", novo->fone[0].numero_telefone);
    printf("DDD(telefone movel):");
    scanf(" %s", novo->fone[1].DDD);
    printf("Numero do telefone movel:");
    scanf(" %s", novo->fone[1].numero_telefone);
    
    if(agenda->inicio == NULL){
        agenda->inicio = novo;
        novo->proximo = NULL;
    }
    else{
        aux = agenda->inicio;
        agenda->inicio = novo;
        novo->proximo = aux;
    }
    agenda->tam++;
}else{
    printf("\n\tERRO>memoria insuficiente\n");
    }
}

void FINAL(Lista *agenda){
    Contato *aux, *novo = (Contato*) malloc(sizeof(Contato));

    if(novo){

        printf("Nome:");
        scanf(" %50[^\n]",novo->nome);
        printf("Email:");
        scanf(" %30[^\n]",novo->email);
        printf("Rua:");
        scanf(" %30[^\n]",novo->end.rua);
        printf("Numero da casa:");
        scanf(" %d",&novo->end.numero);
        printf("Bairro:");
        scanf(" %50[^\n]",novo->end.bairro);
        printf("Cidade:");
        scanf(" %50[^\n]",novo->end.cidade);
        printf("DDD(telefone fixo):");
        scanf(" %s",novo->fone[0].DDD);
        printf("Numero do telefone fixo:");
        scanf(" %s",novo->fone[0].numero_telefone);
        printf("DDD(telefone movel):");
        scanf(" %s",novo->fone[1].DDD);
        printf("Numero do telefone movel:");
        scanf(" %s",novo->fone[1].numero_telefone);
        
        if(agenda->inicio == NULL){
            agenda->inicio = novo;
            novo->proximo = NULL;
        }
        else{
            aux = agenda->inicio;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux->proximo =  novo;
            novo->proximo = NULL;
        }
        agenda->tam++;
    }
    else{
        printf("\n\tERR0 > Memoria insuficiente\n");
    }
    
        
}

void ADDPOSICAO(Lista *agenda, int posicao){
    Contato *aux, *backup, *novo = (Contato *) malloc(sizeof(Contato));

    if(novo){
    
        if(posicao == 1 && agenda->inicio == NULL){   // ERR0 > excluir(REMOVERINICIO) este contato desencadeia a quebra da função(IMPRIMIR)
            printf("Nome:");                         //ERR0 > excluir(REMOVERFIM) este contato desencadeia contatos fantasmas ou com dados alterados
            scanf(" %50[^\n]",novo->nome);
            printf("Email:");
            scanf(" %30[^\n]",novo->email);
            printf("Rua:");
            scanf(" %30[^\n]",novo->end.rua);
            printf("Numero da casa:");
            scanf(" %d",&novo->end.numero);
            printf("Bairro:");
            scanf(" %50[^\n]",novo->end.bairro);
            printf("Cidade:");
            scanf(" %50[^\n]",novo->end.cidade);
            printf("DDD(telefone fixo):");
            scanf(" %s",novo->fone[0].DDD);
            printf("Numero do telefone fixo:");
            scanf(" %s",novo->fone[0].numero_telefone);
            printf("DDD(telefone movel):");
            scanf(" %s",novo->fone[1].DDD);
            printf("Numero do telefone movel:");
            scanf(" %s",novo->fone[1].numero_telefone);
            agenda->inicio = novo;
            novo->proximo = NULL;
            agenda->tam++;
        }
        else if(posicao == 1 && agenda->inicio != NULL){ // ERRO > excluir(REMOVERINICIO) este contato desencadeia na função(IMPRIMIR) contato fantasma

            aux = agenda->inicio;
            printf("Nome:");
            scanf(" %50[^\n]",novo->nome);
            printf("Email:");
            scanf(" %30[^\n]",novo->email);
            printf("Rua:");
            scanf(" %30[^\n]",novo->end.rua);
            printf("Numero da casa:");
            scanf(" %d",&novo->end.numero);
            printf("Bairro:");
            scanf(" %50[^\n]",novo->end.bairro);
            printf("Cidade:");
            scanf(" %50[^\n]",novo->end.cidade);
            printf("DDD(telefone fixo):");
            scanf(" %s",novo->fone[0].DDD);
            printf("Numero do telefone fixo:");
            scanf(" %s",novo->fone[0].numero_telefone);
            printf("DDD(telefone movel):");
            scanf(" %s",novo->fone[1].DDD);
            printf("Numero do telefone movel:");
            scanf(" %s",novo->fone[1].numero_telefone);
            agenda->inicio = novo;
            novo->proximo = aux;
            agenda->tam++;
        }
        else if(posicao > 1 && agenda->inicio != NULL){ 

            int i = 0;
            aux = agenda->inicio;
            int refer = posicao - 2;

            printf("Nome:");
            scanf(" %50[^\n]",novo->nome);
            printf("Email:");
            scanf(" %30[^\n]",novo->email);
            printf("Rua:");
            scanf(" %30[^\n]",novo->end.rua);
            printf("Numero da casa:");
            scanf(" %d",&novo->end.numero);
            printf("Bairro:");
            scanf(" %50[^\n]",novo->end.bairro);
            printf("Cidade:");
            scanf(" %50[^\n]",novo->end.cidade);
            printf("DDD(telefone fixo):");
            scanf(" %s",novo->fone[0].DDD);
            printf("Numero do telefone fixo:");
            scanf(" %s",novo->fone[0].numero_telefone);
            printf("DDD(telefone movel):");
            scanf(" %s",novo->fone[1].DDD);
            printf("Numero do telefone movel:");
            scanf(" %s",novo->fone[1].numero_telefone);

            while(i != refer){
                aux = aux->proximo;
                i++;
            }
            backup = aux->proximo;
            aux->proximo = novo;
            novo->proximo = backup;
            agenda->tam++;
        }
        else if(posicao >1 && agenda->inicio == NULL){      //operacional

            printf("\n\tERR0 > NENHUM CONTATO REGISTRADO\n");
        }
        else if(posicao <=0 ){  //operacional
            printf("\n\tERR0 > NUMERO INVALIDO\n");
        }
    }
    else{
        printf("\n\tERR0 > Memoria insuficiente\n");
    }  
}


void REMOVERINICIO(Lista *agenda){
    if(agenda->inicio != NULL){
        Contato *aux, *backup;

        aux = agenda->inicio;
        backup = aux->proximo;
        agenda->inicio = backup;

        free(aux);
        agenda->tam--;
    }
}

void REMOVERFIM(Lista *agenda){
    Contato *aux;
    aux = agenda->inicio;

    while(aux->proximo != NULL){
        aux = aux->proximo;
    }

    free(aux);
    aux->proximo = NULL;    // não sei se é necessário
    agenda->tam--;
}

void REMOVERPOSICAO(Lista *agenda,int posicao){

    if(agenda->inicio != NULL){
        Contato *aux, *backup, *remover;

        if(posicao == 1){
            
            aux = agenda->inicio;
            backup = aux->proximo;
            agenda->inicio = backup;
            free(aux);
            agenda->tam--;
        }
        else{
            int i = 0, refer = posicao - 2;
            
           aux = agenda->inicio;

            while(i != refer){
                aux = aux->proximo;
                i++;
            }
            remover = aux->proximo;
            backup = remover->proximo;
            aux->proximo = backup;
            free(remover);
            agenda->tam--;
            
        }
    }

}

void EDITAR(Lista *agenda,int posicao){
    Contato *aux = agenda->inicio;
    int i = 0, refer = posicao - 1;
    int Confirmar;
    
    while(i != refer){
        aux = aux->proximo;
        i++;
    }

    printf("\n\tEDITANDO CONTATO\n");
    printf("Nome: %s",aux->nome);
    printf("\n--->Confirme a edicao:(1-Confirmar 0-Sair): ");
    scanf("%d",&Confirmar);

    if(Confirmar == 1){
    printf("Nome:");
    scanf(" %50[^\n]",aux->nome);
    printf("Email:");
    scanf(" %30[^\n]",aux->email);
    printf("Rua:");
    scanf(" %30[^\n]",aux->end.rua);
    printf("Numero da casa:");
    scanf(" %d",&aux->end.numero);
    printf("Bairro:");
    scanf(" %50[^\n]",aux->end.bairro);
    printf("Cidade:");
    scanf(" %50[^\n]",aux->end.cidade);
    printf("DDD(telefone fixo):");
    scanf(" %s",aux->fone[0].DDD);
    printf("Numero do telefone fixo:");
    scanf(" %s",aux->fone[0].numero_telefone);
    printf("DDD(telefone movel):");
    scanf(" %s",aux->fone[1].DDD);
    printf("Numero do telefone movel:");
    scanf(" %s",aux->fone[1].numero_telefone);

    printf("\n\tCONTATO EDITADO COM SUCESSO\n");
    }
    else{
        printf("\n\tPROCESSO CANCELADO\n");
    }
}

void IMPRIMIR(Lista *agenda){
    Contato *aux;
    int j = 0;

    if(agenda->tam != 0){

        aux = agenda->inicio;
        for(int i = 0; i < agenda->tam; i++){

            printf("\n\t****Contato %d****\n",j+1);
            printf(" Nome: %s\n",aux->nome);
            printf("Email: %s\n", aux->email);
            printf("Rua: %s\n",aux->end.rua);
            printf("Numero da casa: %d\n",aux->end.numero);
            printf("Bairro: %s\n", aux->end.bairro);
            printf("Cidade: %s\n", aux->end.cidade);
            printf("DDD(fixo): %s\n", aux->fone[0].DDD);
            printf("Telefone(fixo): %s\n", aux->fone[0].numero_telefone);
            printf("DDD(movel): %s\n", aux->fone[1].DDD);
            printf("Telefone(movel): %s\n", aux->fone[1].numero_telefone);
            printf("\t****************\n");
            aux = aux->proximo;
            j++;
            
        }
    }
    else{
        printf("\n\tNENHUM CONTATO REGISTRADO\n");
    }

}

void BUSCA(Lista *agenda,char nomeBusca[50]){
    Contato *aux = agenda->inicio;
    int i = 0, contador = 0;
    
    if(agenda->tam == 0){
        printf("NENHUM CONTATO REGISTRADO");
    }
    else{
        while(contador != agenda->tam){
            if(strcmp(aux->nome,nomeBusca) == 0){
                printf("\n\tContato %d\n",i + 1);
                printf(" Nome: %s\n",aux->nome);
                printf("Email: %s\n", aux->email);
                printf("Rua: %s\n",aux->end.rua);
                printf("Numero da casa: %d\n",aux->end.numero);
                printf("Bairro: %s\n", aux->end.bairro);
                printf("Cidade: %s\n", aux->end.cidade);
                printf("DDD(fixo): %s\n", aux->fone[0].DDD);
                printf("Telefone(fixo): %s\n", aux->fone[0].numero_telefone);
                printf("DDD(movel): %s\n", aux->fone[1].DDD);
                printf("Telefone(movel): %s\n", aux->fone[1].numero_telefone);
                aux = aux->proximo;
                i++;
                contador++;
            }
            aux = aux->proximo;
            contador++;
        }
    }
        if(i == 0){
            printf("\nNENHUM CONTATO ENCONTRADO\n");
        }
}

void INSERIRMEMORIA(Lista *agenda){
    Contato *pessoa = (Contato*) malloc( 5 * sizeof(Contato));


       strcpy(pessoa[0].nome,"Luis Felipe Costa Ferreira");
        strcpy(pessoa[0].email, "luizin18@gmail.com");
        strcpy(pessoa[0].end.rua, "Acarpio");
        pessoa[0].end.numero = 10;
        strcpy(pessoa[0].end.bairro,"Monte Verde");
        strcpy(pessoa[0].end.cidade,"Pocos de Caldas");
        strcpy(pessoa[0].fone[0].DDD, "35");
        strcpy(pessoa[0].fone[0].numero_telefone, "991201425");
        strcpy(pessoa[0].fone[1].DDD, "35");
        strcpy(pessoa[0].fone[1].numero_telefone, "992012322");

        agenda->inicio =  pessoa;
        agenda->tam++;

        strcpy(pessoa[1].nome,"Maria Clara Gonsalves Silveira");
        strcpy(pessoa[1].email, "MariaClaraGS@gmail.com");
        strcpy(pessoa[1].end.rua, "Margarida");
        pessoa[1].end.numero = 320;
        strcpy(pessoa[1].end.bairro,"Jardim flora");
        strcpy(pessoa[1].end.cidade,"Campinas");
        strcpy(pessoa[1].fone[0].DDD, "19");
        strcpy(pessoa[1].fone[0].numero_telefone, "996271824");
        strcpy(pessoa[1].fone[1].DDD, "19");
        strcpy(pessoa[1].fone[1].numero_telefone, "993062412");


        pessoa->proximo = (pessoa + 1);    
        agenda->tam++;

        strcpy(pessoa[2].nome,"Jucelino Kubistech");
        strcpy(pessoa[2].email, "JKpresid@hotmail.com");
        strcpy(pessoa[2].end.rua, "Avelida Marida");
        pessoa[2].end.numero = 140;
        strcpy(pessoa[2].end.bairro,"Vila olimpia");
        strcpy(pessoa[2].end.cidade,"Governador Valadares");
        strcpy(pessoa[2].fone[0].DDD, "78");
        strcpy(pessoa[2].fone[0].numero_telefone, "951431435");
        strcpy(pessoa[2].fone[1].DDD, "78");
        strcpy(pessoa[2].fone[1].numero_telefone, "942015422");

        (pessoa + 1)->proximo = (pessoa + 2);
        agenda->tam++;

        strcpy(pessoa[3].nome,"Felipe Garcia Pavila");
        strcpy(pessoa[3].email, "Felipe2.garcia@if.edu.br");
        strcpy(pessoa[3].end.rua, "Argentina");
        pessoa[3].end.numero = 661;
        strcpy(pessoa[3].end.bairro,"Jardim formosa");
        strcpy(pessoa[3].end.cidade,"Pocos de Caldas");
        strcpy(pessoa[3].fone[0].DDD, "35");
        strcpy(pessoa[3].fone[0].numero_telefone, "931605443");
        strcpy(pessoa[3].fone[1].DDD, "35");
        strcpy(pessoa[3].fone[1].numero_telefone, "994072679");
        
        (pessoa + 2)->proximo = (pessoa + 3);
        agenda->tam++;

        strcpy(pessoa[4].nome,"Giovanna Lopes Carmim");
        strcpy(pessoa[4].email, "GI_lops@gmail.com");
        strcpy(pessoa[4].end.rua, "Lacio");
        pessoa[4].end.numero = 1107;
        strcpy(pessoa[4].end.bairro,"Vila minerva");
        strcpy(pessoa[4].end.cidade,"Sao Paulo");
        strcpy(pessoa[4].fone[0].DDD, "87");
        strcpy(pessoa[4].fone[0].numero_telefone, "991973455");
        strcpy(pessoa[4].fone[1].DDD, "87");
        strcpy(pessoa[4].fone[1].numero_telefone, "999012462");

        (pessoa + 3)->proximo = (pessoa + 4);
        (pessoa + 4)->proximo = NULL;
        agenda->tam++;
}

#endif