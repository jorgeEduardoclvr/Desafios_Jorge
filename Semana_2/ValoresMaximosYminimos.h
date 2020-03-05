#include<stdio.h>
#include<math.h>
struct Ejemplo{
    int first;
    float second;
    char third;
    }ejemplo2;
int aux;
int valoresMaximos()
{
   printf("El valor maximo de char es:%d\n",aux=pow(2,8*sizeof(ejemplo2.third))); //valor de unsigned char
  printf("El valor maximo de int es:%d\n",aux=pow(2,4*sizeof(ejemplo2.first))); //valor de unsigned int
  printf("El valor maximo de float es:%d\n\n",aux=pow(2,8*sizeof(ejemplo2.second))); //No supe realmente calcular el valor de float
}
int valoresMinimos()
{
  printf("El valor maximo de int es:%d\n",aux=(pow(2,8*sizeof(ejemplo2.third))/-2)); //valor minimo de char
  printf("El valor maximo de int es:%d\n",aux=(pow(2,4*sizeof(ejemplo2.first))/-2)); //valor minimo de int
  printf("El valor maximo de float es:%d\n",aux=(pow(2,8*sizeof(ejemplo2.second))/-2)); //No supe realmente calcular el valor de float
}