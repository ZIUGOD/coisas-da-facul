#include<stdio.h>
#include<locale.h>

int idade;

main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	if(idade >= 21)
	{
		printf("Você é MAIOR de idade!");
	}
	else
	{
		printf("Você é MENOR de idade!");
	}

}
