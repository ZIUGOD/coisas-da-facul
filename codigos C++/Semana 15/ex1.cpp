#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num[6], i, totalPar=0, totalImpar=0;
	
	printf("==============================");
	for (i=0; i<6; i++)
	{
		printf("\n- Insira um %i° valor: ", i + 1);
		scanf("%i", &num[i]);
	}
	printf("==============================\n");
	for (i=0; i<6; i++)
	{
		if (num[i] % 2 == 0)
		{
			totalPar += 1;
			printf("~ %i é par!\n", num[i]);
		}else
		{
			totalImpar += 1;
			printf("~ %i é ímpar!\n", num[i]);
		}
	}
	printf("==============================\n");
	printf("> Total de números ímpares: %i\n", totalImpar);
	printf("> Total de números pares: %i", totalPar);
}
