#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repeti��o
Exerc�cio: 20
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa e de Carlos Eduardo C. Ribeiro.
*/

int num[10];
int ct = 0;

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	for(int i = 0; i <= 9; i++)
	{
		printf("\n Insira um %i� n�mero: ", i+1);
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
		
	    // Se 'Primo' = 1 entao n�mero � primo
		if (primo == 1){
			ct += 1;
		}		
	}
	printf("\nDos n�meros inseridos, %i s�o primos.",ct);	   
}
