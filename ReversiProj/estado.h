//
// Created by pja on 27/02/2019.
//


#include <stdio.h>
#include <string.h>
#include "ctype.h"
#include "stdlib.h"

#ifndef PROJ_ESTADO_H
#define PROJ_ESTADO_H



/**
estado.h
Definição do estado i.e. tabuleiro. Representação matricial do tabuleiro.
*/


// definição de valores possiveis no tabuleiro
typedef enum {VAZIA, VALOR_X, VALOR_O} VALOR;

/**
Estrutura que armazena o estado do jogo
*/
typedef struct estado {
    VALOR peca; // peça do jogador que vai jogar!
    VALOR grelha[8][8];
    char modo; // modo em que se está a jogar! 0-> manual, 1-> contra computador
    struct estado *ant;
} ESTADO;


void printa(ESTADO);
int verificajogada (ESTADO *e, int x, int y);
void joga (ESTADO *e, int x, int y);
void poepeca (ESTADO *e,int x, int y);
void guardajogo (ESTADO *e, char linha[]);
void whereCanIPut (ESTADO *e);
void novoEstado (ESTADO *e, char linha[]);
void readGame (ESTADO *e, char linha[]);
void copyEstado (ESTADO *e, ESTADO *aux);


#endif //PROJ_ESTADO_H