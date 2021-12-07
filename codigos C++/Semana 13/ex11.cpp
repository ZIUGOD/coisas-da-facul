#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

/*
Lista de repetição
Exercício: 11
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa.
*/

main()
{

	setlocale(LC_ALL, "Portuguese");
		
	float aVista = 0, aPrazo = 0, flt = 0;

	for(int i = 1; i <= 15; i++)
	{
		int opc;
		
		printf("                  Transação %i                     \n",i);
		printf("\nInsira o tipo da transação (1 a vista e 2 a prazo): ");
		scanf("%i",&opc);
		if(opc == 1){
			printf("\nDigite o valor da compra: ");
			scanf("%f",&flt);
			aVista = aVista + flt;
			flt = 0;
			opc = 0;
		}else if(opc == 2)
		{
			printf("\nDigite o valor da compra: ");
			scanf("%f",&flt);
			aPrazo = aPrazo + flt;
			flt = 0;
			opc = 0;
		}else
		{
			printf("Opção inválida.\n\n");
			opc = 0;
			continue;
		}
	}
	printf("\n=======================================\n");
	printf("Valor a vista: R$%.2f \nValor a prazo: R$%.2f ", aVista, aPrazo);
	printf("Valor total das transações: R$%.2f \nValor da 1ª prestação (compras a prazo): R$%.2f", (aVista + aPrazo), (aPrazo / 3));
}
