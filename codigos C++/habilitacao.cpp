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
		printf("Voc� est� apto a tirar habilita��o!");
	}
	else
	{
		printf("Voc� N�O est� apto a tirar habilita��o!");
	}
}
