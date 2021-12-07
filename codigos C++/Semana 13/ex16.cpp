#include<stdio.h>
#include<locale.h>
#include<math.h>

/*
Lista de repetição
Exercício: 16
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

main()
{
	setlocale(LC_ALL,"Portuguese");
    int idade, soma, cont = 0, mediaidade = 0;
	float numPessoas10e30altura = 0, contadorDePessoas = 0, porcentagem;
    float altura = 0, peso, soma_idades = 0, media = 0;
    
	printf("=======================================================\n");
   for(int i = 1; i <= 3; i++)
    {
        printf("\t	%d° Pessoa\n\nIdade: ", i);
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
        soma_idades = soma_idades + idade;
        if( peso > 90 && altura < 1.50 )
		{
        
            contadorDePessoas++;
        }
            
        if( idade >= 10 && idade <= 30 && altura >1.90 )
		{
        
        	numPessoas10e30altura++;
            
		}
 
 	}

       media = soma_idades /3;
       porcentagem = numPessoas10e30altura * 100/contadorDePessoas;
		
  
	printf("========================================================\n");
   	printf("\n Media da idade das pessoas : %f",  media);
    printf("\n Qtd. de pessoa com peso superior a 90 e altura menor de 1.50 : %.f",  contadorDePessoas);
    if( numPessoas10e30altura == 0 )
	{
        numPessoas10e30altura = 1;
    printf("\nPorcentagem de pessoas com idade entre 10 e 30 e tem mais de 1.90 de altura é :%.f %%\n\n"), porcentagem;
  }
}	
