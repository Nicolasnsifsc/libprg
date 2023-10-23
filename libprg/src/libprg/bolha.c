//
// Created by aluno on 23/10/23.
//

#include <stdio.h>

int main(void)
{
    int *n[6], a, b;
    printf("Adicione um número: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n-1; ++j) {
            if (j<j+1)
            {
                a = j;
                j = j+1;
                j = a;

            }


        }

    }
    return 0;
}