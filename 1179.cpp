#include <stdio.h>

int main()
{

    int a, b, c, i, j, l;
    int par[5], impar[5];

    b = 0;
    c = 0;
    for (i = 0; i < 15; i++)
    {

        scanf("%d", &a);

        if (a % 2 == 0)
        {

            par[b] = a;
            b++;
            if (b == 5)
            {

                b = 0;
                for (j = 0; j < 5; j++)
                {

                    printf("par[%d] = %d\n", j, par[j]);
                }
            }
        }
        else
        {

            impar[c] = a;
            c++;

            if (c == 5)
            {

                c = 0;
                for (l = 0; l < 5; l++)
                {

                    printf("impar[%d] = %d\n", l, impar[l]);
                }
            }
        }
    }

    for (i = 0; i < c; i++)
    {

        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (i = 0; i < b; i++)
    {

        printf("par[%d] = %d\n", i, par[i]);
    }
}