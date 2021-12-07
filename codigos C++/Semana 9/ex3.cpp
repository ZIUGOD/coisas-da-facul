#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	printf("Digite um valor qualquer: ");
	scanf("%i", &valor);
	
	valor = valor - 10;
	
	if (valor > 0)
	{
		printf("\nValor maior que 10!");
	}
		else if (valor == 0)
		{
		printf("\nValor igual a 10!");
	}
		else if (valor < 0)
		{
			printf("\nValor menor que 10!");
		}
}
