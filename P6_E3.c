#include <stdlib.h>
#include <stdio.h>

char primer_letra(char* cadena);

char main()
{
    char cadena[10];

    printf("ingrese una cadena de texto\n");
    scanf("%s", &cadena);

    printf("la primera letra de la palabra: %s es: %c\n",cadena,primer_letra(cadena));

    system("pause");
    return 0;
}

char primer_letra(char* cadena)
{
    return cadena[0];
}