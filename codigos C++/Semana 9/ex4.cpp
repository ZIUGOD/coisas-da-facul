#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &a);
	
	printf("\nDigite um número inteiro diferente: ");
	scanf("%i", &b);
	
	if (a > b)
	{
		printf("\n%i é maior!",a);
	}
	else if (b > a)
	{
		printf("\n%i é maior!",b);
	}
	else if (a == b)
	{
		printf("Valores inválidos. Reinicie a operação.");
	}
}
