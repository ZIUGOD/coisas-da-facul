#include<stdio.h>

main()
{
	int i, qtde;
	float notas, soma, md;
	
	soma = 0;
	printf("> Digite a quantidade de notas que vc deseja cadastrar: ");
	scanf("%i",&qtde);
	
	for(i = 0; i < qtde; i++)
	{
	  	printf("> Digite a nota do aluno %i: ",i+1);
	    scanf("%f",&notas);
		soma = soma + notas;
	}
	md = soma / qtde;
	printf("\n> A soma das notas: %.2f", soma);
    printf("\n> A media das notas: %.2f", md);
}
