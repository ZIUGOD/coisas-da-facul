#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Exerc�cio de tabuada
Ca�que Oliveira Carvalho
2111304
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,x1, x2, soma;
	
	soma = 1;
	
	printf("==========================================\n");
	printf(" Favor, utilizar apenas valores inteiros!!\n");
	printf("==========================================\n");
	printf("- N�mero a ser multiplicado: ");
	scanf("%i", &x1);
	printf("\n- Gostaria de ver a tabuada at� que n�mero? ");
	scanf("%i", &x2);
	
	printf("\n==========================================\n");
	
	for (i = 1; i <= x2; i++)
	{
		soma = x1 * i;
		printf("%i * %i = %i\n", x1, i, soma);	
	}
}
