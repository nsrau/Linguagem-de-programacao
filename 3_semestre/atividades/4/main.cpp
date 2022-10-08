#include <stdio.h>

int multiplos_de_cinco(int numero, int contador, int sequencia)
{
    if (sequencia == 0)
    {
        contador = contador + numero;
    }
    if (numero % 5 == 0)
    {
        if ((numero + 5) % 5 == 0 && sequencia == 0)
        {
            numero = numero + 5;
        }
        printf("o prossimo multiplo de 5 é: %d \n", numero);
    }
    if (contador > numero)
    {
        return multiplos_de_cinco(numero + 1, contador, sequencia + 1);
    }
    return 0;
}

int main()
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    multiplos_de_cinco(numero, 5 * 10, 0);

    return 0;
}