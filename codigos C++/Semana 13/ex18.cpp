#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 18
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa.
*/

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int num, pares, primos=0;
	 
	for(int j = 1; j <= 10; j++)
	{
		printf("\n Digite o um %i° número : ", j);
		scanf("%i", &num);
	
		if(num % 2 == 0 )
		{
			pares += num;
		}

	    int primo = 1;
	    	
		if (num == 1 || num == 0)
		{
	        continue;        	
		}
			
		for (int j = 2; j <= num / 2; ++j)
		{
		    if (num % j == 0)
			{
		        primo = 0;
		        break;
		    }
		}

		//Se 'Primo' = 1 ent número é primo
		if (primo == 1)
		{
		    primos += num;
		}	
	}
	printf("\nA soma dos números pares é : %i", pares);
	printf("\nA soma dos números primos é : %i", primos);
}
