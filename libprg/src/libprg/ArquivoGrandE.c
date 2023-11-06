//
// Created by aluno on 06/11/23.
//
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

FILE * abrir_arquivo(char *nome_do_arquivo)
{
    FILE *arquivo = fopen(nome_do_arquivo, "r");
    if(arquivo == NULL)
    {
        perror("Não foi possível abrir o arquivo!\n");
        exit(EXIT_FAILURE);
    }
    return arquivo;
}

int64_t tamanho_arquivo(char *nome_do_arquivo)
{
    FILE *arquivo = abrir_arquivo(nome_do_arquivo);
    // indo para o final do arquivo
    fseek(arquivo, 0, SEEK_END);
    int64_t tamanho = ftell(arquivo);
    fclose(arquivo);
    return tamanho;
}

int main(int argc, char **argv)
{
    for(int i = 0; i < argc; i++)
    {
        printf("arg [%d]: %s\n", i, argv[i]);
    }
    return 0;
}
