#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repeti��o
Exerc�cio: 2
Aluno: Ca�que Oliveira Carvalho.
*/

main()
{
    setlocale(LC_ALL,"Portuguese");
	int n;
	float soma = 0;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	
	for (float i=1; i<=n; i++)
	{
		soma = soma + (1/i);
		printf("%.2f\n", soma);
	}
}
