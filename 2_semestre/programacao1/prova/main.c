#include <stdio.h>

int main()
{
  int mes;
  printf("por favor inserir o mes: \n");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:
  case 2:
  case 3:
    printf("trimestre 1");
    break;
  case 4:
  case 5:
  case 6:
    printf("trimestre 2");
    break;
  case 7:
  case 8:
  case 9:
    printf("trimestre 3");
    break;
  case 10:
  case 11:
  case 12:
    printf("trimestre 4");
    break;
  default:
    printf("valor invalido.");
    break;
  }

  return 0;
}
