#include<stdio.h>
#include<locale.h>
#include<math.h>

int idade_cnh, idade_user, diferenca;

main()
{
	setlocale(LC_ALL,"Portuguese");
	idade_cnh = 18;
	// inputs
	printf("Digite sua idade: ");
	scanf("%i",&idade_user);
	
	// processamentos
	diferenca = idade_user - idade_cnh;
	
	// outputs
	if (diferenca >= 0)
	{
		printf("Você está apto a tirar habilitação!");
	}
	else
	{
		printf("Você NÃO está apto a tirar habilitação!");
	}
}
