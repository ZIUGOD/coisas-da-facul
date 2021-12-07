#include<locale.h>
#include<math.h>
#include<stdio.h>

/*
Lista de repetição
Exercício: 15
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

int main()
{
    int idade, i, idadeSup50=0, numPessoas10_20=0, contadorDePessoas=0;
    float altura, peso, pesoMenor40=0.0, somaAlt10_20=0.0;
	for(i=1; i<=25; i++)
    {
        printf("\tPessoa %d:\n\nIdade: ", i);
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
        if( idade > 50 )
            idadeSup50++;
        if( idade >= 10 && idade <= 20 )
        {
            somaAlt10_20 += altura;
            numPessoas10_20++;
        }
        if( peso < 40 )
            pesoMenor40++;
            
        contadorDePessoas++;
    }
    printf("\n\t\tRESULTADO:\n\nQtd. de pessoa com idade superior a 50: %d", idadeSup50);
    if( numPessoas10_20 == 0 )
        numPessoas10_20 = 1;
    printf("\nMédia das alturas de pessoas entre 10 e 20 anos: %.2f", somaAlt10_20/numPessoas10_20);
    printf("\nPorcentagem de pessoas com o peso inferior a 40 kg: %.2f%%\n\n", pesoMenor40*100/contadorDePessoas);
}
