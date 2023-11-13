#ifndef LIBPROG_LIBPRG_H
#define LIBPROG_LIBPRG_H
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <sys/time.h>
#include <stdint.h>
#include <stdio.h>



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

//Irá criar um vetor povoado com número aleatórios que o usuário irá escolher
int criar(int *vetor,int tamanho);

//Irá povoar o vetor criado se for não ordenado
int povoar_nao_ord(int *vetor,int *total,int tamanho);

//Irá povoar o vetor criado se for ordenado
int povoar_ord(int *vetor,int *total,int tamanho);

//Irá inserir número em uma lista ordenada
int insere_ord(int *vetor,int *total,int tamanho,int elemento);

//Irá inserir um número em uma lista não ordenada
int insere_nao_ord(int *vetor,int *total,int tamanho,int elemento);

//Irá remover um número de uma lista ordenada
int remove_num_ord(int *vetor,int *total,int tamanho,int elemento);

//Irá remover um número de uma lista não ordenada
int remove_num_nao_ord(int *vetor,int *total,int tamanho,int elemento);

//Irá fazer uma busca linear pelo vetor
int busca_linear(int *vetor,int total,int tamanho, int elemento);

//Irá fazer uma busca binaria de forma interativa pelo vetor
int busca_bin_int(int *vetor,int total,int elemento);

//Irá fazer uma busca binaria de forma recursiva pelo vetor
int busca_bin_rec(int *vetor,int inicio,int fim, int elemento);

//Irá liberar a memório alocado pelo vetor
int libera_memoria(int *vetor,int tamanho);



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

// =================== Lista Encadeada ===================

typedef struct{
     int dados;
     struct no_t *proximo;
} no_t;

// criar uma lista
no_t∗ criar(int dado);

// buscar por dados
bool buscar(no_t∗ inicio, int dado);

// inserir novo nó
no_t∗ inserir(no_t∗ inicio, int dado);

// excluir toda lista
void destruir(no_t∗ inicio);


// ================== Tomada de Tempo ======================


void inicio_relogio_parede(struct timeval *inicio);
double fim_relogio_parede(struct timeval *inicio);
void relogio_CPU();


// ================== Ordenação ======================

typedef struct {
    int *vet;
    int tamanho;
}ord_t;

int criar_vet(ord_t *ord);
int povoar(ord_t *ord);
void bubble(ord_t *ord,bool crescente);
void insert(ord_t *ord);
void selection(ord_t *ord,bool crescente);
void nosso(ord_t *ord);
void merge_sort(ord_t *ord, int esquerda, int direita);
void merge(ord_t *ord,int meio,int esquerda, int direita);
void imprimi(ord_t *ord);







#endif //LIBPROG_LIBPRG_H
