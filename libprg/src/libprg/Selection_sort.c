//
// Created by aluno on 23/10/23.
//
#include <libprg/libprg.h>

int main(void)
{
    int N[5]={0}, a[5], b[5], c[5], i, j, min, temp;
    printf("Adicione um número: ");
    scanf("%d", N[5]);
    for (i = 0; i < N[5]; ++i) {
        min = i;
        for (j = i+1; j < N[5]; j++) {
            if(a[j] < c[min])
            {
                min = j;
            }
            if(i != min)
            {
                temp = a[min];
                a[min] = a[i];
                a[i] = temp;
            }
        }
        printf("%d ", a[i]);
    }

    return 0;
}
