#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 2
Aluno: Caíque Oliveira Carvalho.
*/

main()
{
    setlocale(LC_ALL,"Portuguese");
	int n;
	float soma = 0;
	
	printf("Digite um número: ");
	scanf("%i", &n);
	
	for (float i=1; i<=n; i++)
	{
		soma = soma + (1/i);
		printf("%.2f\n", soma);
	}
}
