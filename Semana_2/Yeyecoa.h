#include<stdio.h>
int yeyecoa()
{
	int a,count,count2,count3;
	char cad[3]={'*','+','^'};
	printf("Digita el tamanio de la piramide:");
	scanf("%d",&a);
	for(count=1;count<=a;++count)
	{
		for(count2=1;count2<=a-count;++count2)
		{
			printf(" ");
		}
		for(count2=1,count3=0;count2<=2*count-1;++count2,++count3)
		{
			printf("%c",cad[count3]);
			if(count3>2)
				count3=0;
		}
		putchar('\n');
	}
	for(count=2;count<=a;++count)
	{
		for(count2=1;count2<=a-count;++count2)
		{
			printf(" ");
		}
		for(count2=1,count3=0;count2<=2*count-1;++count2,++count3)
		{
			printf("%c",cad[count3]);
			if(count3>2)
				count3=0;
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