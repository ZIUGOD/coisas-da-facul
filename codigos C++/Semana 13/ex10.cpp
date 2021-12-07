#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 10
Aluno: Caíque Oliveira Carvalho.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, soma;
	soma=1; j=1;
	
	printf("========================\nTabuada do 1 ao 10:\n\n");
	
	for (i=1; i<=10; i++)
	{
		printf("Tabuada do %i:\n", i);
		for (j=1; j<=10; j++)
		{
			printf("\n%i * %i = %i", i, j, i * j);
		}
		printf("\n========================\n");
	}
}
