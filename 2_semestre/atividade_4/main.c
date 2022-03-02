#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa que contenha duas variáveis do tipo int,
// cujos valores devem ser informados pelo usuário.
// Em seguida, o programa deve acrescentar 80% de seu valor
// à primeira variável e 150% de seu valor à segunda variável.
// Esses valores devem ser calculados.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numA, numB;

    printf("por favor inserir o valor de numero a: ");
    scanf("%d", &numA);
    printf("\n");

    printf("por favor inserir o valor de numero b: ");
    scanf("%d", &numB);
    printf("\n");

    int increaseA = numA * 80 / 100;
    wprintf(L"o valor de a mais 80% é: %d", numA + increaseA);
    printf("\n");

    int increaseB = numB * 150 / 100;
    wprintf(L"o valor de b mais 150% é: %d", numB + increaseB);

    return 0;
}