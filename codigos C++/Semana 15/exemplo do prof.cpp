#include<stdio.h>
main()
{
	float notas[10];
	int i;	
	for(i=0; i<10; i++)
	{
		printf("Digite uma nota: ");
		scanf("%f",&notas[i]);
	}	  
	for(i=0; i<10; i++)
	{
		if(i%2 == 0)
		   printf("\n%i -> [%.2f] ",i,notas[i]);
		else
		   printf("\n%i -> [ ] ",i);		
	}	
}

