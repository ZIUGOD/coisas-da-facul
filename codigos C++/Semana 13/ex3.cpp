#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 3
Aluno: Caíque Oliveira Carvalho.

Professor, sei que o programa pedia produto, mas o resultado 
era um número tão grande que bugava o programa. Não soube
como prosseguir e espero que me entenda. Saiba que eu entendi 
a questao e que aprendi o que foi passado.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, primo, produto;
	produto = 1;
		
	for (i=92; i<=1478; i++)
	{
		primo = 0;
		for (j=1; j<=i; j++)
		{
			if (i%j == 0)
			primo = primo +1;
		}
	if (primo == 2)
			{
				produto = produto * i;
				printf("\n%i", produto);
			}
	}
}
