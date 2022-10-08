
#include <stdio.h>

int multiplos_de_cinco(int numero)
{
    if (numero % 5 == 0)
    {
        return numero;
    }
    return multiplos_de_cinco(numero + 1);
}

int main()
{
    int numero;
    int multiplo;
    int contador = 0;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    multiplo = multiplos_de_cinco(numero);

    while (contador < 10)
    {
        if (numero == multiplo)
        {
            multiplo = multiplos_de_cinco(multiplo + 1);
        }
        printf("o prossimo multiplo de 5 é: %d \n", multiplo);
        contador = contador + 1;
        multiplo = multiplos_de_cinco(multiplo + 1);
    }

    return 0;
}