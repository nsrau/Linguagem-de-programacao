#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa para imprimir seus dados, 
// que devem ser apresentados na tela da seguinte maneira:
// Nome: Regiane Marcon
// Profissão: Professora
// Cidade: Dourados
// UF: MS
// Utilize printf para desenvolver essa atividade. 
int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Nome: Regiane Marcon");
    printf("\n");
    wprintf(L"Profissão: Professora");
    printf("\n");
    printf("Cidade: Dourados");
    printf("\n");
    printf("UF: MS");

    return 0;
}