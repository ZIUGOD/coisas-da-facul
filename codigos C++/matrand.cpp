#include<stdio.h>
#include<stdlib.h>

#define lin 25
#define col 25


main()
{
	int mat[lin][col];
	int i, j;
// Preenchendo a matriz	
	for (i=0; i<lin; i++)
	{
		for (j=0; j<col; j++)
		{
			mat[i][j] = rand()%10;
		}
	}
	system("cls");
// Mostrando a matriz Original
    printf("\n ** Mostrando Matriz Original");
	for(i=0; i<lin; i++)
	{
		printf("\n");
		for (j=0; j<col; j++)
		{
			printf("[%i]",mat[i][j]);
		}
	}
// Mostrando a matriz Modificada
    printf("\n ** Mostrando Matriz Modificada");
	for(i=0; i<lin; i++)
	{
		printf("\n");
		for (j=0; j<col; j++)
		{
			if (mat[i][j]%2 == 0)
			    printf("[%i]",mat[i][j]);
			else if (mat[i][j] == 3)
			        printf("[%i]",mat[i][j]);
			    else
			        printf("[ ]"); 
		}
	}
// Mostrando a DP - Diagonal principal	
    printf("\n\n ** Mostrando a DP");
	for(i=0; i<lin; i++)
	{
		printf("\n");
		for(j=0; j<col; j++)
		{
			if( i == j )
			   printf("[%i]",mat[i][j]);
			else
			   printf("[ ]");
		}
	}
// Mostrando a DP - Diagonal principal	
    printf("\n\n ** Mostrando a DS ***");
	for (i=0; i<lin; i++)
	{
		printf("\n");
		for (j=0; j<col; j++)
		{
			if ( (i + j) == (col - 1 ))
			    printf("[%i]",mat[i][j]);
			else if ( i == j )
			        printf("[%i]",mat[i][j]);
			     else
			        printf("[ ]");
		}
	}
}
