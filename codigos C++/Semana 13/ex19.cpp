#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repeti��o
Exerc�cio: 19
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa e de Carlos Eduardo C. Ribeiro.
*/

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	float valorCarro;
	int opt = 0;
	
	printf("Digite o valor do carro:\nR$ ");
	scanf("%f", &valorCarro);
	printf("Selecione um dos parcelamentos dispon�veis: \n");
	
	// OUTPUT DAS OP��ES DISPONIVEIS
	for(int i = 0; i <= 60; i+=6)
	{
		if((i+1) == 1)
		{
			printf("- 1 Parcela (� vista).\n");
		}else{
			printf("- %i Parcelas.\n", i);
		}
	}
	scanf("%i", &opt);
	printf("==========\n\n");
	if(opt == 1)
	{
		valorCarro = valorCarro - (valorCarro * 0.2);
		printf("Pre�o final: R$%.f \nN�mero de Parcelas: %i (a vista). \nValor de cada parcela:  R$%.f",valorCarro, opt, valorCarro);
	}else
	{
		valorCarro = valorCarro + (valorCarro * ((opt/2) * 0.01));
		printf("Pre�o final: R$%.f \nN�mero de parcelas: %i. \nValor de cada parcela:  R$%.f",valorCarro, opt, (valorCarro/opt));
	}
}
