#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define linha 3
#define coluna 5

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[linha][coluna];
	int quantidadeL, quantidadeC, total = 0;
	
	srand (time(NULL)); // essa linha serve para facilitar na hora de gerar valores aleatorios
	
	for (int i=0; i<linha; i++) // FOR para as linhas
	{
		for (int j=0; j<coluna; j++) // FOR para as colunas
		{
			matriz[i][j] = rand() % 99; // Gerar numeros aleatorios para a matriz entre 0 e 99
			
			if (matriz[i][j] <= 20 && matriz[i][j] >= 15) // Condição para valores entre 15 e 20
			{
				total = total + 1;
			}
			printf("[%i] ",matriz[i][j]); // Mostrar a matriz completa
		}
		printf("\n");
	}
	
	printf("\n\nQuantidade de números entre 15 e 20: %i", total);
}
