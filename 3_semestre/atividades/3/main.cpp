#include <stdio.h>

struct funcionarios
{
    char nome[35];
    char codigo_interno[5];
    int percentual_de_comissao;
    float valor_vendido;
    float valor_do_salario;
};

float calcula_salario(float valor_vendido, int percentual_de_comissao)
{
    int desconto = 11;
    float salario = (valor_vendido * percentual_de_comissao) / 100;

    if (salario < 2000)
    {
        desconto = 3;
    }
    else if (salario >= 2000 && salario < 5000)
    {
        desconto = 5;
    }
    else if (salario >= 5000 && salario < 10000)
    {
        desconto = 7;
    }

    return salario + ((salario * desconto) / 100);
}

int main()
{
    funcionarios func;
 
    printf("Entre com o nome: ");
    fflush(stdin);
    fgets(func.nome, 35, stdin);
    printf("Entre com a percentual de comissao: ");
    scanf("%d", &func.percentual_de_comissao);
    printf("Entre com o valor vendido: ");
    scanf("%f", &func.valor_vendido);

    func.valor_do_salario = calcula_salario(func.valor_vendido, func.percentual_de_comissao);

    printf("\n Valor do salario de(a) %s com desconto de sindicato: %.2f \n", func.nome, func.valor_do_salario);

    return 0;
}