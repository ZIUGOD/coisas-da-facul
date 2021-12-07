#include<math.h>
#include<locale.h>
#include<stdio.h>

/*
Lista de repetição
Exercício: 4
Aluno: Caíque Oliveira Carvalho, com colaboração de Iãh Uchoa e de Carlos Eduardo C. Ribeiro.
*/

int grupo1[4]= {};
int grupo2[4]= {};
int grupo3[4]= {};
int grupo4[4]= {};
int grupo5[4]= {};
int valor;
	
// Entrada dos dados;
void collector(int array[], int id)
{
		
	printf("Insira os valores do grupo %i: \n", id);
	for(int j = 0; j <= 3; j++)
	{
		scanf("%i",&valor);
		array[j]= valor;
		valor = 0;
	}
}
	
//Entrada dos dados
void entrada()
{
	for(int j = 1; j <= 5; j++)
	{
		int cs = j;
		switch(cs)
		{
			case 1:
				collector(grupo1, 1);
			break;
			case 2:
				collector(grupo2, 2);
			break;
			case 3:
				collector(grupo3, 3);
			break;
			case 4:
				collector(grupo4, 4);
			break;
			case 5:
				collector(grupo5, 5);
			break;
		}
	}
}

//Função para ordenas os vetores;
	void ordenador_default(int array[], int id)
	{
		printf("\nGrupo %i: ", id);
		for(int y = 0; y <= 3; y++)
		{
			if(y != 3)
			{
				printf(" %i,", array[y]);
			}else
			{
				printf(" %i.\n", array[y]);
			}
		}	
	}
	
void display_default()
{
	printf("\nOrdem por Entrada: ");
	for(int j = 1; j <= 5; j++)
	{
		int ct = j;
		switch(ct)
		{
			case 1:
				ordenador_default(grupo1, 1);
			break;
			case 2:
				ordenador_default(grupo2, 2);
			break;
			case 3:
				ordenador_default(grupo3, 3);
			break;
			case 4:
				ordenador_default(grupo4, 4);
			break;
			case 5:
				ordenador_default(grupo5, 5);
			break;
		}
	}
}
	
// Função crescente para ordenar
void ordenador_crescente(int array[], int tam, int id)
{
	printf("\nGrupo %i: ", id);
	for(int i = 0; i < tam; i++) 
	{
		int min = i;
		for(int j= i+1; j< tam; j++) 
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		int aux = array[i];
		array[i] = array[min];
		array[min] = aux;
	}
		for(int x = 0;x <= 3; x++)
		{
			if(x!= 3)
			{
				printf(" %i,", array[x]);
			}else
			{
				printf(" %i.\n", array[x]);
			}
		}
	}
	
//Display crescente
void display_crescente()
{
	printf("\n--Ordem Crescente--");
	for(int j = 1; j <= 5; j++)
	{
		int ct = j;
		switch(ct)
		{
			case 1:
				ordenador_crescente(grupo1, 4, 1);
			break;
			case 2:
				ordenador_crescente(grupo2, 4, 2);
			break;
			case 3:
				ordenador_crescente(grupo3, 4, 3);
			break;
			case 4:
				ordenador_crescente(grupo4, 4, 4);
			break;
			case 5:
				ordenador_crescente(grupo5, 4, 5);
			break;
		}
	}
}

//Função decresente dos vetores
void ordenador_decrescente(int array[], int tam, int id)
{
	printf("\nGrupo %i: ", id);
	for(int i = 0; i < tam; i++)
	{
		int max = i;
		
		for(int j= i+1; j< tam; j++)
		{
			if(array[j] > array[max])
			{
				max = j;
			}
		}
			
		int aux = array[i];
		array[i] = array[max];
		array[max] = aux;
	}
	for(int x = 0;x <= 3; x++)
	{
		if(x != 3){
			printf(" %i,", array[x]);
		}else
		{
			printf(" %i.\n", array[x]);
		}
	}
}

//Display decrescente
void display_decrescente()
{
	printf("\nOrdem Decrescente:");
	for(int j = 1; j <= 5; j++){
		int ct = j;
		switch(ct)
		{
			case 1:
				ordenador_decrescente(grupo1, 4, 1);
			break;
			case 2:
				ordenador_decrescente(grupo2, 4, 2);
			break;
			case 3:
				ordenador_decrescente(grupo3, 4, 3);
			break;
			case 4:
				ordenador_decrescente(grupo4, 4, 4);
			break;
			case 5:
				ordenador_decrescente(grupo5, 4, 5);
			break;
		}
	}
}
	
main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("--==++Grupos de valores++==--\n");
	entrada();
	display_default();
	display_crescente();
	display_decrescente();
}
