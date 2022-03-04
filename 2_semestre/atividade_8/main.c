#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa que deve pedir ao usuário para informar
// o nome de uma pessoa (deve ter no máximo 30 caracteres).
// O programa deverá converter este nome para minúsculo e depois para maiúsculo.

int num1, num2;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    printf("Digite o seu nome(máximo 30 caracteres): \n");
    scanf("%[^\n]s", nome);

    printf("Nome: %s\n", nome);
    wprintf(L"nome em minúsculo: %s\n", strlwr(nome));
    wprintf(L"nome em maiúsculo: %s", strupr(nome));

    return 0;
}