#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, primo;
		
	for (i=1; i<=500; i++)
	{
		primo = 0;
		for (j=1; j<=i; j++)
		{
			if (i % j == 0)
			primo = primo +1;
		}
	if (primo == 2)
		printf("\n%i", i);
	}
}
