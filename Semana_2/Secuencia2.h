#include<stdio.h>
int secuencia2()
{
	int a,count,count2;
	printf("Digita el tamanio de la piramide:");
	scanf("%d",&a);
	for(count=1;count<=a;++count)
	{
		for(count2=1;count2<=a-count;++count2)
		{
			printf(" ");
		}
		for(count2=1;count2<=2*count-1;++count2)
		{
			printf("*");
		}
		putchar('\n');
	}
	for(count=1;count<=a-1;++count)
	{
		for(count2=1;count2<=a-1;++count2)
		{
			printf(" ");
		}
		printf("|");
		printf("\n");
	}
	return 0;
}