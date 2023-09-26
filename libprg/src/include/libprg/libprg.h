#ifndef LIBPROG_LIBPRG_H
#define LIBPROG_LIBPRG_H
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



// ============================= Lista =========================

//// make lista
///**
// *
// * @param vetor
// * @param tamanho
// * @return
// */
//int criar_lista(int *vetor, int tamanho);
//
////destruir lista
///**
// *
// * @param vetor
// * @return
// */
//int destruir(int *vetor, int tamanho);
//
//// insere na lista linear
///**
// *
// * @param vetor
// * @param total
// * @param tamanho_vetor
// * @param elemeto
// * @return
// */
//int inserir_l(int *vetor, int *total, int tamanho, int elemeto);
//
//// insere na lista ordenada
///**
// *
// * @param vetor
// * @param total
// * @param tamanho_vetor
// * @param elemeto
// * @return
// */
//int inserir_o(int *vetor, int *total, int tamanho, int elemeto);
//
//// remover da lista linear
///**
// *
// * @param vetor
// * @param total
// * @param elemeto
// * @return
// */
//int remover_l(int *vetor, int *total, int elemeto);
//
//// remover da lista ordenada
///**
// *
// * @param vetor
// * @param total
// * @param elemeto
// * @return
// */
//int remover_o(int *vetor, int *total, int elemeto);
//
//// buscar linear
///**
// *
// * @param vetor
// * @param elemeto
// * @return
// */
//int busca_l(int *vetor, int total, int tamanho, int elemeto);
//
///**
// * buscar binária de inteiros
// * @param vetor a buscar no elemento
// * @param elemeto a ser buscado
// * @return -1 if não encontrar e 1 se encontrar
// */
//int busca_bin_int(int *vetor, int total, int tamanho, int elemeto);
//
//// busca binaria recursiva
///**
// *
// * @param vetor
// * @param elemeto
// * @return
// */
//int busca_bin_rec(int *vetor, int total, int tamanho, int elemeto);



// ======================== Fila ====================



typedef struct
{
    int *vetor;
    int tamanho;
    int total;
    int inicio;
    int fim;
}fila_t;


// enfileirar <- Adiciona um elemento no final da fila
int enqueue(fila_t *fila, int elemento);


// desenfileirar <- Remove o elemento que está no ínicio da fila
int dequeue(fila_t *fila);


// ínicio <- Retorna o elemento que está no ínicio da fila
int head(fila_t *fila);


// fim <- Retorna o elemento que está no final da fila
int tail(fila_t *fila);


// tamanho <- Retorna o total de elementos na fila
int size(fila_t *fila);


// vazia <- Indica se a fila está vazia ou não
int empty(fila_t *fila);


// Cheia <- Indica se a fila está cheia ou não
int full(fila_t *fila);




// ============================= Stack ===================================

typedef struct
{
    int *vetor;
    int total;
    int inicio;
    int tamanho;
    int end;
}stack;


// Criar Pila
int criar_Pilha(stack *St_p);

// Ad
// iciona elemento no topo da pilha
int push(stack *St_p, int elemento);


// Remove elemento no topo da pilha
int pop(stack *St_p);


// Retorna total de elemento na pilha
int size_pilha(stack *St_p);


// Retorna se a pilha está vazia ou não
int empty_pilha(stack *St_p);





#endif //LIBPROG_LIBPRG_H
