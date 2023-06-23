#include <stdlib.h>
#include <stdio.h>

float signo(float nro);

int main()
{

    float nro;
    int resultado;
    printf("ingrese un numero real\n");
    scanf("%f", &nro);

    signo(nro);

    system("pause");
    return 0;
}

float signo(float nro)
{
    if (nro < 0)
    {
        printf("valor: -1\n");
    }
    else if (nro == 0)
    {
        printf("valor: 0\n");
    }
    else
    {
        printf("valor: 1\n");
    }
}
