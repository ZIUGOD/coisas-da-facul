#include<stdio.h>
#include<math.h>
#include<locale.h>

main()

{
setlocale(LC_ALL,"Portuguese");

int idade, diferenca;

printf("Digite sua idade: \n");
scanf("%i",&idade);

diferenca = idade - 21;

if (diferenca >= 0)
{
	printf("Voc� � maior de 21 anos!");
}
if (diferenca < 0)
{
	printf("Voc� n�o � maior de 21!");
}

}
