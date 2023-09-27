#ifndef AGENDASTRUCT_H
#define AGENDASTRUCT_H

#include <stdio.h>
#include <string.h>
#define Tam 50
#define Lim 30
#define MAX_fone 9
#define MAX_ddd 2

    struct endereco{
    char rua[Tam];
    int numero;
    char bairro[Tam];
    char cidade[Tam];
};

struct telefone{
    char DDD[MAX_ddd];
    char numero_telefone[MAX_fone];
};

 typedef struct contato{
    char nome[Tam];
    char email[Lim];
    struct endereco end;
    struct telefone fone[2];
    struct contato *proximo;
} Contato;
/*
Contato novoContato(){  
    Contato novaPessoa;    

    printf("Nome:");
    scanf(" %50[^\n]", novaPessoa.nome);
    printf("Email:");
    scanf(" %30[^\n]", novaPessoa.email);
    printf("Rua:");
    scanf(" %30[^\n]", novaPessoa.end.rua);
    printf("Numero da casa:");
    scanf(" %d",&novaPessoa.end.numero);
    printf("Bairro:");
    scanf(" %50[^\n]", novaPessoa.end.bairro);
    printf("Cidade:");
    scanf(" %50[^\n]", novaPessoa.end.cidade);
    printf("DDD(telefone fixo):");
    scanf(" %s", novaPessoa.fone[0].DDD);
    printf("Numero do telefone fixo:");
    scanf(" %s", novaPessoa.fone[0].numero_telefone);
    printf("DDD(telefone movel):");
    scanf(" %s", novaPessoa.fone[1].DDD);
    printf("Numero do telefone movel:");
    scanf(" %s", novaPessoa.fone[1].numero_telefone);
    

    return novaPessoa; 
}
*/

 #endif


