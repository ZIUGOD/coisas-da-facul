#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repeti��o
Exerc�cio: 1
Aluno: Ca�que Oliveira Carvalho.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	for (i=1000; i<=2000; i++)
	{
		if (i % 11 == 5)
		{
			printf("\n%i", i);
		}
	}
}
