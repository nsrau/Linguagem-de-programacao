#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa que peça ao usuário para informar a nota de cinco alunos. O
// programa deve calcular a média dessas notas e mostrar
// todas as notas maiores ou iguais à média.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Digite a nota do aluno 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota do aluno 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota do aluno 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota do aluno 4: ");
    scanf("%f", &nota4);

    printf("Digite a nota do aluno 5: ");
    scanf("%f", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    wprintf(L"A média é = %.1f\n", media);

    if (nota1 >= media)
    {
        wprintf(L"O aluno 1 esta na média: %.1f\n", nota1);
    }
    if (nota2 >= media)
    {
        wprintf(L"O aluno 2 esta na média: %.1f\n", nota2);
    }
    if (nota3 >= media)
    {
        wprintf(L"O aluno 3 esta na média: %.1f\n", nota3);
    }
    if (nota4 >= media)
    {
        wprintf(L"O aluno 4 esta na média: %.1f\n", nota4);
    }
    if (nota5 >= media)
    {
        wprintf(L"O aluno 5 esta na média: %.1f", nota5);
    }

    return 0;
}
