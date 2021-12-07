#include<stdio.h>
#include<locale.h>

// O codigo nao roda sei la porque. Se vira aí

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num[7], i;
	
	printf("====================================");
	for (i=0; i<7; i++)
	{
		printf("\n-- Insira o %i° número inteiro: ", i + 1);
		scanf("%i", &num[i]);
	}
	printf("\n====================================");
	for (i=0; i<7; i++)
	{
		if (num[i] % 2 == 0 )
		{
			printf("\n> %i é divisível por 2", num[i]);
		}
		if (num[i] % 3 == 0 )
		{
			printf("\n> %i é divisível por 3", num[i]);
		}
		if (num[i] % 2 == 0 && num[i] % 3 == 0 )
		{
			printf("\n> %i é divisível por 2 e 3", num[i]);
		}
	}
	printf("\n====================================");
}
