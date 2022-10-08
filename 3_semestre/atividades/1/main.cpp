#include <cstdio>
/**
 * pq_1 => ponteiro quantidade
 * q_p_1 => quantidade produto
 * pp => ponteiro preço
 * p_p => preço produto
 *  
 */
int main()
{
    int * pq_1, q_p_1;
    int * pq_2, q_p_2;
    float * pp_1, p_p_1;
    float * pp_2, p_p_2;

    printf("Informe a quantidade do produto 1: ");
    scanf("%d", &q_p_1);
    printf("Informe a quantidade do produto 2: ");
    scanf("%d", &q_p_2);
    printf("Informe o preço do produto 1: ");
    scanf("%f", &p_p_1);
    printf("Informe o preço do produto 2: ");
    scanf("%f", &p_p_2);

    pq_1 = &q_p_1;    
    pq_2 = &q_p_2; 

    pp_1 = &p_p_1;    
    pp_2 = &p_p_2;

    printf("valor total produto 1: %.2f \n", p_p_1 * q_p_1);   
    printf("valor total produto 2: %.2f \n", p_p_2 * q_p_2);    

    return 0;
}
