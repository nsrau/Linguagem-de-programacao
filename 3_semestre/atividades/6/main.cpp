#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std;
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
    funcionarios *func;
    char continua = 's';
    int contador = 0;
    printf("informe os dados dos 5 funcionarios \n");
    do
    {
        func = new funcionarios;
        printf("Entre com o nome do funcionario %d: ", contador + 1);
        fflush(stdin);
        cin >> func->nome;

        contador = contador + 1;
        printf("deseja continuar? s ou n: \n");
        cin >> continua;
        delete func;
    } while (contador < 5 && continua == 's');

    return 0;
}