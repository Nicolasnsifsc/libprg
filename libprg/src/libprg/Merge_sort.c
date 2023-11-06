//
// Created by aluno on 30/10/23.
//
#include <libprg/libprg.h>

// Em C esquerda começa com 0 e direita com n − 1
int merge_sort(int *vetor[10], int esquerda, int direita)
{
    int meio = 0;
  if (esquerda < direita) {
      meio = esquerda + (direita − esquerda)/2; // divisão
      ordene as duas metades(conquista);
      merge_sort(vetor, esquerda, meio);
      merge_sort(vetor, meio + 1, direita);
      // mescle as metades (combinação)
      merge(vetor, esquerda, meio, direita);
  }
 retorna (vetor );
}


int main(void)
{
    int meio, esquerda, direita, *vetor[10]={0};


    return 0;
}