#include <stdio.h>
int main()
{
    int v, i, N[10];
    scanf("%d", &v);
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, v);
        v += v;
    }
    return 0;
}