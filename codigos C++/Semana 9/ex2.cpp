#include<stdio.h>
#include<math.h>
#include<locale.h>

main()

{

setlocale(LC_ALL,"Portuguese");

int a, b, c, d;
printf("\nDigite um número: ");
scanf("%i", &a);

printf("\nDigite outro: ");
scanf("%i", &b);

printf("\nDigite outro: ");
scanf("%i", &c);

printf("\nDigite o último: ");
scanf("%i", &d);

if (b>c && d>a && c+d > a+b && c >= 0 && d >=0 && a % 2 == 0)
{
	printf("\nValores aceitos!");
}
	else
	printf("\nValores inválidos.");
}
