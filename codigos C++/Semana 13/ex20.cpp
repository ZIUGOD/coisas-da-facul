#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repetição
Exercício: 20
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

int num[10];
int ct = 0;

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	for(int i = 0; i <= 9; i++)
	{
		printf("\n Insira um %i° número: ", i+1);
		scanf("%i", &num[i]);	
	}

	for(int i = 0; i <= 9;i++)
	{
		if (num[i] == 1 || num[i] == 0)
		{
			continue;        	
		}

	    int primo = 1;

	    for (int j = 2; j <= num[i] / 2; ++j)
		{
			if (num[i] % j == 0)
			{
				primo = 0;
				break;
	        }
		}
		
	    // Se 'Primo' = 1 entao número é primo
		if (primo == 1){
			ct += 1;
		}		
	}
	printf("\nDos números inseridos, %i são primos.",ct);	   
}
