#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 8
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int idade[15], soma1 =0, soma2 =0, soma3 =0, soma4 =0, soma5 =0;
	
	for(int i = 0; i <=14; i++)
	{
		printf("Idade da %i° pessoa: ", i +1);
		scanf("%i",&idade[i]);
		printf("\n");
		
			if(idade[i] > 0 && idade[i] <= 15)
			{
				soma1 += 1;
			}
			else if (idade[i] >= 16 && idade[i]<= 30)
			{
				soma2 += 1;
			}
			else if (idade[i] >= 31 && idade[i] <= 45)
			{
				soma3 += 1;
			}
			else if (idade[i] >= 46 && idade[i] <= 60)
			{
				soma4 += 1;
			}
			else if (idade[i] >= 61)
			{
				soma5+= 1;	
			}
	}
	float percent = 0;
	
	printf("\n================================");
	printf("\n Quantidade de pessoas: 15 (100%%)");
	percent = (soma1 * 100) / 15;
	printf("\n Idade de até 15: %i (%.f%%)",soma1, percent);
	percent = 0;
	percent = (soma2 * 100) / 15;
	printf("\n Idade entre 16 á 30: %i (%.f%%) ",soma2, percent);
	percent = 0;
	percent = (soma3 * 100) / 15;
	printf("\n Idade entre 31 á 45: %i (%.f%%) ",soma3, percent);
	percent = 0;
	percent = (soma4 * 100) / 15;
	printf("\n Idade entre 46 e 60: %i  (%.f%%) ",soma4, percent);
	percent = 0;
	percent = (soma5 * 100) / 15;
	printf("\n Idade acima de 61: %i  (%.f%%)",soma5, percent);
}
