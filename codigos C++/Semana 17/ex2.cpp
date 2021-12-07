#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[9];
	
	for (int i=0; i<10; i++)
	{
		printf("Insira o %i° valor: ", i + 1);
		scanf("%i", &vetor[i]);
	}
	printf("==================\n");
	for (int i=0; i<10; i++)
	{
		printf("> %i° valor: %i\n",i + 1, vetor[i]);
	}
	printf("==================\n");
}
