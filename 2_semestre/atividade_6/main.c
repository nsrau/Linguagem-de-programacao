#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Crie um programa que peça ao usuário para informar o valor
// de sete variáveis do tipo inteiro. O programa mostrar os
// números que forem divisíveis por cinco e maiores do que dez.
// Utilize comando de repetição para resolver essa atividade..

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n[7];
    int i, j;

    for (i = 0; i < 7; i++)
    {
        printf("Digite o valor da variavel %d: ", i+1);
        scanf("%d", &n[i]);
    }

    for (j = 0; j < 7; j++ ) {
        if(n[j] % 5 == 0 && n[j] > 10) {
            printf("a variavel %d e divisivel por 5 e maior que 10\n", j+1);
        }
   }

    return 0;
}
