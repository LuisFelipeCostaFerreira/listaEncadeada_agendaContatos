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

 #endif


