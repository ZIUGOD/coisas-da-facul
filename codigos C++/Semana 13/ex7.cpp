#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repeti��o
Exerc�cio: 7
Aluno: Ca�que Oliveira Carvalho.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int people, quantity, i;
	quantity = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("Digite a idade da %i� pessoa: ", i);
		scanf("%i", &people);
		
		printf("\n");
		
		if (people >= 18)
			quantity = quantity + 1;
	};
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("N�mero de pessoas maiores de 18 anos: %i\n", quantity);	
}
