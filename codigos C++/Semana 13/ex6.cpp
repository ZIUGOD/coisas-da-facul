#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repeti��o
Exerc�cio: 6
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa e de Carlos Eduardo C. Ribeiro.
*/

main()
{
	
	setlocale(LC_ALL, "Portuguese");

	float price=5, lucro=600, lucrmax=0,gasto_realizado=200;
 	
	int quantidade= 120;
 
 	printf("=============================================================\n");
 	printf("                     MENU DE OP��ES            \n \n");
 	printf("Ingressos\tQuantidade \t Vendas Totais \t   lucro ");
	printf("\n_____________________________________________________________\n");

	while(price >= 1)
	{
		
	lucro = price * quantidade; lucrmax = lucro - gasto_realizado;
	
	printf("\n R$%.2f",price);
 	printf("\t \t %i",quantidade);
 	printf("\t \t R$%.2f",lucro);
  	printf("\t R$%.2f", lucrmax); quantidade = quantidade + 26; price = price - 0.5;
 }
}
