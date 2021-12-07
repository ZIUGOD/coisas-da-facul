#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int max, i,result;
	result = 0;
	
	printf("Digite um número: ");
	scanf("%i", &max);
	
	printf("\n");
	
	for (i = 0; i <= max; i++)
	{
		result = result + i;
		printf("\n%i", result);
	}
}	
