#include<string.h>
#include<locale.h>
#include<math.h>
#include<stdio.h>

/*
Lista de repeti��o
Exerc�cio: 5
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa e de Carlos Eduardo C. Ribeiro.
*/


main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char nomes[15][100];
	char temp[100]; 
	char nome[100];
	float valores[15];
		

	printf("Favor, n�o inserir nomes com acentos!!\n");
	printf("\n			Entrada de dados\n");
	for (int i = 0; i <= 14; i++)
	{
		
	    printf("%i� cliente: ", i+1);
	    scanf("%s", nome);
	    strcpy(nomes[i], nome);
	    printf("Insira o valor gasto pelo %i� cliente: ", i+1);
	    scanf("%f", &valores[i]);
	    
	    printf("\n_______________________________________________\n");	
	}


printf("\n\n				Relat�rio				\n");
	for (int x = 0; x <= 14; x++)
	{
		int coeficiente;
		
		if(valores[x] >= 1000)
		{
			coeficiente = 15;
		}else{
			coeficiente = 10;
		}
		float bonus = (valores[x]*coeficiente)/100;
		printf("               %i� cliente:", x+1);
		printf("\n - Nome: %s \n - Valor Gasto: R$%.2f \n - B�nus: R$%.2f (%i%%)", nomes[x], valores[x],bonus,coeficiente);
		printf("\n==========================================\n");
	}
}
