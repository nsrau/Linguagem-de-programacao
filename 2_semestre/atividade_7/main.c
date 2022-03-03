#include <stdio.h>

// Crie um programa que leia notas de 8 alunos de duas em duas e insira essas notas em um
// array de int. Depois que todas as notas forem informadas e estiverem armazenadas no vetor,
// localize nele a maior e menor notas e exiba na tela de saída do programa

int main()
{

    int nota1[8];
    int nota2[8];
    int menor, maior;

    int i, j;

    for (i = 0; i < 8; i++)
    {
        int aluno = i + 1;
        printf("Digite a nota 1 do aluno %d: ", aluno);
        scanf("%d", &nota1[i]);
        printf("Digite a nota 2 do aluno %d: ", aluno);
        scanf("%d", &nota2[i]);
    }
    
    menor = nota1[0];
    maior = nota2[7];

    for (j = 0; j < 8; j++)
    {
        if (nota1[j] < menor)
        {
            menor = nota1[j];
        }
        if (nota2[j] < menor)
        {
            menor = nota2[j];
        }

        if (nota1[j] > maior)
        {
            maior = nota1[j];
        }
        if (nota2[j] > maior)
        {
            maior = nota2[j];
        }
    }

    printf("a maior nota e %d: \n", maior);
    printf("a menor nota e %d: ", menor);

    return 0;
}
