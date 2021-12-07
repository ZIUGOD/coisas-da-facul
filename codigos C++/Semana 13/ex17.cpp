#include<math.h>
#include<stdio.h>
#include<locale.h>

/*
Lista de repetição
Exercício: 17
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

main()
{
	
	int opc = 0, idade = 0, gaveta = 0; 
	float counter_m = 0 , counter_f = 0 , idade_m = 0, idade_f = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	for(int i = 1; i <= 7; i++)
	{
		printf("%i° Cadastro:\n", i);
		printf("Digite seu sexo\n(1) Feminino: \n(2) Masculino:\n");
		scanf("%i", &opc);
		printf("Digite sua idade: \n");
		scanf("%i", &gaveta);
		printf("\n=====================\n");
		
		if(opc == 1)
		{
			counter_f += 1;
			idade_f += gaveta; 
		}
		if(opc == 2)
		{
			counter_m += 1;
			idade_m += gaveta;
		}
		idade += gaveta;
		opc = 0;
		gaveta = 0;
	}
	float result = 0;
	result = idade / 7;
	printf("Idade média do grupo: %.f anos", result);
	
	result = 0;
	result = idade_f / counter_f;
	printf("\n A idade média das Mulheres é : %.0f anos", result);
	
	result = 0;
	result = idade_m / counter_m;
	printf("\n A idade média dos Homens é : %.0f anos", result);
}
