#include<stdio.h>
#include<math.h>
#include<locale.h>

/*
Lista de repeti��o
Exerc�cio: 13
Aluno: Ca�que Oliveira Carvalho, com colabora��o de I�h Uchoa.
*/

main()
{
	
	setlocale(LC_ALL,"portuguese");
	
    int idade, ct_50, ct_10a20;
    float altura, peso, peso_m40, alt_10a20;
	
	printf("\n-----------------------------");
	
	for(int i = 1; i <= 25; i++)
	{
        printf("\n\t%d� Indiv�duo.\n-----------------------------\nIdade: ", i);
        printf("");
        scanf("%d", &idade);
        printf("\nAltura: ");
        scanf("%f", &altura);
        printf("\nPeso: ");
        scanf("%f", &peso);
        
        printf("\n-----------------------------");
        
        if( idade > 50 )
		{
            ct_50++;        	
		}if( idade >= 10 && idade <= 20)
		{
            alt_10a20 += altura;
            ct_10a20++;
        }if( peso < 40 )
		{
        	peso_m40 = peso_m40 + peso;
		}
    }
    float percent = (peso_m40*100)/25;
    
    printf("\n\tRELAT�RIO:\n\nQuantidade de pessoas com idade superior a 50: %d", ct_50);
    printf("\nM�dia das alturas de pessoas entre 10 e 20 anos: %.2f", (alt_10a20/ct_10a20));
    printf("\nPorcentagem de pessoas com o peso inferior a 40 kg: %.2f%%\n\n", percent);

}
