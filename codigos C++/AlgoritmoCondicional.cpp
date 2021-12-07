#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, media;
	printf("Favor, inserir apenas valores de 0 a 100.");

	printf("\nPrimeira nota: ");
	scanf("%f",&n1);
	
	printf("\nSegunda nota: ");
	scanf("%f",&n2);
	
	printf("\nTerceira nota: ");
	scanf("%f",&n3);
	
	printf("=======================");
	
	media = (n1 + n2 + n3) /3;
	printf("\nA média foi de: %.2f",media);
	
	if (media >= 85)
		{
		printf("\n\nClassificação: A");
		}
		else if (media <85 && media >= 70)
			printf("\n\nClassificação: B");
			else if (media <70 && media >= 60)
			{
				printf("\n\nClassificação: C");
			}
			else if (media < 60 && media < 60 )
				{
					printf("\n\nClassificação: D");
				}
			if (media >= 60)
				{
			printf("\n\nAprovado.");
			}else
			{
				printf("\nReprovado");
			}
}
