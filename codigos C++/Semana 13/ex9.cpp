#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repeti��o
Exerc�cio: 9
Aluno: Ca�que Oliveira Carvalho.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i,x1, x2, soma, space;
	space = 0;
	soma = 1;
	
	printf("==========================================\n");
	printf(" Favor, utilizar apenas valores inteiros!!\n");
	printf("==========================================\n");
	printf("- N�mero a ser multiplicado: ");
	scanf("%i", &x1);
	printf("\n- Gostaria de ver a tabuada at� qual n�mero? ");
	scanf("%i", &x2);
	
	for (i = 1; i <= x2; i++)
	{
		space = space +1;
		soma = x1 * i;
		printf("%i * %i = %i\n", x1, i, soma);
		if (space % 10 == 0)
		{
			printf("\n================\n");
		}
	}
	printf("================\n-- FIM --");
}
