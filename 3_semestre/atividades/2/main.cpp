#include <stdio.h>

struct funcionarios
{
    char nome[35];
    char codigo_interno[5];
    int percentual_de_comissao;
    float valor_vendido;
    float valor_do_salario;
};

int main()
{
    funcionarios func;
    printf("Entre com o nome: ");
    fflush(stdin);
    fgets(func.nome,35,stdin);
    printf("Entre com o codigo interno: ");
    fflush(stdin);
    fgets(func.codigo_interno,5,stdin);
    printf("Entre com a percentual de comissao: ");
    scanf("%d", &func.percentual_de_comissao);
    printf("Entre com o valor vendido: ");
    scanf("%f", &func.valor_vendido);
    printf("Entre com o valor do salario: ");
    scanf("%f", &func.valor_do_salario);

    return 0;
}