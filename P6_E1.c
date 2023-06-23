#include <stdlib.h>
#include <stdio.h>

float cubo(float nro);

float main()
{
    float nro;
    float resultado = 0;
    printf("ingrese un nro real\n");
    scanf("%f", &nro);

    resultado = cubo(nro);
    printf("el cubo del numero %f es: %f\n", nro, resultado);

    system("pause");
    return 0;
}

float cubo(float nro)
{
    float cub;
    cub = 0;
    cub = nro * nro * nro;
    return cub;
}