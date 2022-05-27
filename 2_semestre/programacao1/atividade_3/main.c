#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa que leia os valores para 3 
// variáveis do tipo int e mostre os valores depois de lidos.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numA, numB, numC;

    printf("por favor inserir o valor de numero a: ");
    scanf("%d", &numA);
    printf("\n");

    printf("por favor inserir o valor de numero b: ");
    scanf("%d", &numB);
    printf("\n");

    printf("por favor inserir o valor de numero c: ");
    scanf("%d", &numC);
    printf("\n");

    wprintf(L"o valor do numero a é: %d", numA);
    printf("\n");

    wprintf(L"o valor do numero b é: %d", numB);
    printf("\n");

    wprintf(L"o valor do numero c é: %d", numC);

    return 0;
}