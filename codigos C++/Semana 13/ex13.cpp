#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repetição
Exercício: 13
Aluno: Caíque Oliveira Carvalho, com auxílio de Iãh Uchoa.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int idade = 0, pesoCounter = 0, idadeCounter = 0, idadeGaveta = 0;
	float mediaIdade, pesoGaveta;
	
	for (int i=1; i<=7; i++)
	{
		float peso;
		
		printf("\nIdade da %i° pessoa: ", i);
		scanf("%i", &idadeGaveta);
		idade = idade + idadeGaveta;
		idadeGaveta = 0;
		
		printf("\nPeso da %i° pessoa: ", i);
		scanf("%f", &pesoGaveta);
		peso = peso + pesoGaveta;
		
		idadeCounter += 1;
		
		if (pesoGaveta > 90)
		{
			pesoCounter += 1;
			pesoGaveta = 0;
		}
	}
	mediaIdade = (idade / idadeCounter);
	
	printf("\n-- Número de pessoas com mais de 90kg: %i", pesoCounter);
	printf("\n>> Média das idades inseridas: %.2f", mediaIdade);
}
