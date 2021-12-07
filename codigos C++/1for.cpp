/*
    Estruturas de Repetição
    
    1ª estrutura for() -> para()
       Será utilizado qnd soubermos a quantidade de vezes que um trecho de
       código deverá repetir.
    2ª estrutura while() -> enquanto()
       Será utilizada qnd quisermos que a condição seja testada antes de 
       entrar no laço. Ela tbm é utilizada qnd eu não sei qts vezes um trecho
       de código deverá repetir.
    3ª estrutura Do-while() -> repita até()
       Será utilizada qnd quisermos que a condição seja testada após.
	    Ela tbm é utilizada qnd eu não sei qts vezes um trecho
       de código deverá repetir.
       
       Sintaxe do for(inicio; condição; incremento)
                  {
                     comando 1;
                      comando 2;
                        ...
                        comando n-1;
                  } 
                  onde: inicio: inicio da repetição
                        condição: condição de parada;
                        incremento: comportamento da repetição; 
                  for( i=1; i<=11; i++)  i = i + 1; 
                  {
                     soma = soma + i; -> somatório
                  }
*/
#include<stdio.h>


main()
{
	int i, soma, result;
	soma = 0;
	
	for(i=1; i<=11; i++)
	{
		soma = soma + i;
		result = soma + i;
		printf("\n %i + %i = %i",soma, i, result);
	}
	//printf("O valor da soma e: %i.",soma);
	
}








