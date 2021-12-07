#include<stdio.h>
#include<math.h>
#include<string.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 14
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e Carlos Eduardo C. Ribeiro.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float counter_50_60, counter_150, counter_blue, idade, cabelo, red_no_blue;
	float media_150, altura, peso;
	char olhos[20]; 
	char A[20] = {1};  
	char P[20] = {2};
	char V[20] = {3};
	char cabelos[20]; 
	char C[20] = {4}; 
	char R[20] = {5};
	char L[20] = {6};
	
	for(int i = 1; i <= 3; i++)
	{
		printf("		%i° Cadastro\n", i);
		printf("\nInsira sua idade: ");
		scanf("%f", &idade);
		printf("\nInsira seu peso: ");
		scanf("%f", &peso);
		printf("\nInsira sua altura: ");
		scanf("%f", &altura);
		printf("\nInsira a cor dos seus olhos:\n(A) Azul  (P) preto  (v) verde \nR:");
		scanf("%s",olhos);
		printf("\nInsira a cor dos seus cabelos: (P) Preto (C) Castanho (R) Ruivo (L) Loiro\nR:");
		scanf("%s",cabelos);
		
		if(idade > 50 && peso < 60)
		{
			counter_50_60++;
		}
		if(altura < 1.5)
		{
			media_150 += idade;
			counter_150++;
		}
		int valor = strcmp(olhos,A);
		int valor2 = strcmp(cabelos,R);
		if(valor != 0 && valor2 == 0)
		{
			counter_blue++;
			red_no_blue++;
		}
		if(valor == 0)
		{
			counter_blue++;
		}
		for(int j = 0; j <= 19; j++)
		{
			olhos[j] = {};
			cabelos[j] = {};
		}	
	}
	printf("\n=================================================================================");
	printf("\nQuantidade de pessoas com idade maior que 50 anos e peso menor que 60Kg: %.1f ",counter_50_60 );
	printf("\nMédia das idades das pessoas com altura inferior a 1,5m: %.1f ", media_150 / counter_150 );
	printf("\nO perccentual de pessoas com olhos azuis entre todas as pessoas analizadas é de %.1f%%",counter_blue*100 / 3 );
	printf("\nQuantidade de pessoas ruivas que NÃO possuem olhos azuis: %.1f ", red_no_blue);
}
