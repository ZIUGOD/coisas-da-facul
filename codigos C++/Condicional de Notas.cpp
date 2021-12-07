#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	float n1, n2, n3, media;
	printf("Favor, inserir apenas valores de 0 a 10.");

	printf("\nPrimeira nota: ");
	scanf("%f",&n1);
	
	printf("\nSegunda nota: ");
	scanf("%f",&n2);
	
	printf("\nTerceira nota: ");
	scanf("%f",&n3);
	
	media = (n1 + n2 + n3) /3;
	printf("\nA média foi de: %.2f",media);
	

	if (media >= 8.5)
		{
		
		printf("\nClassificação: A");
	
		}
		
		else if (media <8.5 && media >= 7.0)
			printf("\nClassificação: B");
			else if (media <7.0 && media >=6.0)
				{
				printf("\nClassificação: C");
		
				}
				
				else if (media <6.0 && media < 6.0 )
					{
					printf("\nClassificação: D");
		
					}

	
	if (media >=6){
		
		printf("\nAprovado.");
	}else{
		
		printf("\nReprovado");
		
	}
}
