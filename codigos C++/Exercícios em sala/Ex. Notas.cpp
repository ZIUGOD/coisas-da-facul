#include<stdio.h>
#include<locale.h>
#include<math.h>

// Exercício 26/10/2021

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int qnt;	
	qnt = 0;
	
	float nota, media, soma, notaBoa;
	nota = 0;
	media = 0;
	soma = 0;
	notaBoa = 0;
	
	printf("************************************\n");
	printf("**   ROGRAMA PARA CALCULAR MÉDIA  **\n");
	printf("**    para encerrar, insira '0'   **\n");
	printf("************************************\n");
	printf("\nInsira a nota: ");
	scanf("%f", &nota);
	
	while (nota > 0)
	{
		soma = soma + nota;
		qnt = qnt + 1;
		
		if (nota >= notaBoa)
		{
			notaBoa = nota;
		}
		printf("\nInsira a nota: ");
		scanf("%f", &nota);
	}	
	media = soma / qnt;
	printf("\n=======================================");
	printf("\nQuantidade de notas inseridas: %i.", qnt);
	printf("\nMédia total: %.2f.", media);
	printf("\nMaior nota inserida: %.2f.", notaBoa);
	printf("\n=======================================");
	printf("\nSoma total das notas: %.2f", soma);
}
