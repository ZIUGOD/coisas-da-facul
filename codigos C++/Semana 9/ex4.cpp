#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &a);
	
	printf("\nDigite um n�mero inteiro diferente: ");
	scanf("%i", &b);
	
	if (a > b)
	{
		printf("\n%i � maior!",a);
	}
	else if (b > a)
	{
		printf("\n%i � maior!",b);
	}
	else if (a == b)
	{
		printf("Valores inv�lidos. Reinicie a opera��o.");
	}
}
