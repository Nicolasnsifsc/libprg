//
// Created by aluno on 11/09/23.
//
#include <libprg/libprg.h>

int criar_lista(int *vetor,int tamanho)
{
    vetor = (int*) calloc(tamanho,sizeof (int));
    return 0;
}

int povoar_nao_ord(int *vetor,int *total, int tamanho)
{
    srand((unsigned) time(NULL));
    for(int i = 0;i < tamanho;i++){
        vetor[i] = rand() % 1000 + 1;
    }
    return 0;
}

int povoar_ord(int *vetor,int *total,int tamanho)
{
    srand((unsigned) time(NULL));
    for(int i = 0;i < tamanho;i++){
        if(i == 0){
            vetor[i] = rand() % 1000 + 1;
            total++;
        } else{
            for(int j = 0; j < total; j++){
                vetor[i] = rand() % 1000 + 1;
                if(vetor[j] > vetor[i]){
                    int guarda = vetor[j];
                    vetor[j] = vetor[i];
                    vetor [i] = guarda;
                    total++;
                } else{
                    total++;
                }
            }
        }
    }
    return 0;
}


int insere_nao_ord(int *vetor,int *total,int tamanho,int elemento)
{

    if(tamanho > total){
        vetor[(int) &total] = elemento;
        total++;
        return 0;
    }
    return 1;
}

int insere_ord(int *vetor,int *total,int tamanho,int elemento)
{
    if(total < tamanho){
        for(int i = 0; i < total; i++){
            if(vetor[i] > elemento){
                for(int j = (int) &total;j >= i; j--){
                    vetor[j + 1] = vetor[j];
                }
                vetor[i] = elemento;
                break;
            }
        }
        return 0;
    }
    return 1;
}


int busca_linear(int *vetor,int total,int tamanho, int elemento)
{
    for(int i = 0; i < total; i++){
        if(vetor[i] == elemento){
            return 0;
        }
    }
    return 1;
}

int busca_bin_int(int *vetor,int total,int elemento)
{
    for(int i = 0; i <= total;i++){
        int meio = i + (total - i) / 2;
        if(vetor[meio] = elemento){
            return 0;
        } else if(vetor[meio] < elemento){
            i = meio + 1;
        } else{
            total = meio - 1;
        }
    }
    return 1;
}

int busca_bin_rec(int *vetor,int inicio,int fim, int elemento)
{
    if(inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;
        if(vetor[meio] = elemento){
            return 0;
        } if(vetor[meio] > elemento){
            return busca_bin_rec(vetor,inicio, meio - 1, elemento);
        }
        return busca_bin_rec(vetor, meio + 1, fim, elemento);
    }
    return 1;
}

int remove_num_ord(int *vetor,int *total,int tamanho,int elemento)
{
    for(int i = 0;i < total;i++){
        if(vetor[i] == elemento){
            for(;i < total; i++){
                vetor[i] = vetor[i + 1];
            }
            total--;
            return 0;
        }
    }

    return 1;
}

int remove_num_nao_ord(int *vetor,int *total,int tamanho,int elemento)
{
    for(int i = 0;i < total;i++){
        if(vetor[i] == elemento){
            vetor[i] = vetor[(int) &total - 1];
            total--;
            return 0;
        }
    }
    return 1;
}

int libera_memoria(int *vetor,int tamanho)
{
    free(vetor);
    return 0;
}