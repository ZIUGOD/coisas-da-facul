#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<string.h>

/*
Lista de repeti��o
Exerc�cio: 11
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa.
*/

main()
{

	setlocale(LC_ALL, "Portuguese");
		
	float aVista = 0, aPrazo = 0, flt = 0;

	for(int i = 1; i <= 15; i++)
	{
		int opc;
		
		printf("                  Transa��o %i                     \n",i);
		printf("\nInsira o tipo da transa��o (1 a vista e 2 a prazo): ");
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
			printf("Op��o inv�lida.\n\n");
			opc = 0;
			continue;
		}
	}
	printf("\n=======================================\n");
	printf("Valor a vista: R$%.2f \nValor a prazo: R$%.2f ", aVista, aPrazo);
	printf("Valor total das transa��es: R$%.2f \nValor da 1� presta��o (compras a prazo): R$%.2f", (aVista + aPrazo), (aPrazo / 3));
}
