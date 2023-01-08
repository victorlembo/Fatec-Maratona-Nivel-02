#include <stdio.h>

int main()
{

    float matriz[12][12], elemento, soma = 0, media = 0;
    int i, j, col;
    char op;

    scanf("%d %c", &col, &op);

    for (i = 0; i < 12; i++)
    {

        for (j = 0; j < 12; j++)
        {

            scanf("%f", &elemento);
            matriz[i][j] = elemento;
        }
    }

    if (op == 'S')
    {

        j = col;
        while (j == col)
        {

            for (i = 0; i < 12; i++)
            {

                soma += matriz[i][j];
            }

            j++;
        }

        printf("%.1f\n", soma);
    }
    else
    {

        if (op == 'M')
        {

            j = col;
            while (j == col)
            {

                for (i = 0; i < 12; i++)
                {

                    media += matriz[i][j];
                }

                j++;
            }

            printf("%.1f\n", media / 12);
        }
    }
}