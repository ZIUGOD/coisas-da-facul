/*
    Estruturas de Repeti��o
    
    1� estrutura for() -> para()
       Ser� utilizado qnd soubermos a quantidade de vezes que um trecho de
       c�digo dever� repetir.
    2� estrutura while() -> enquanto()
       Ser� utilizada qnd quisermos que a condi��o seja testada antes de 
       entrar no la�o. Ela tbm � utilizada qnd eu n�o sei qts vezes um trecho
       de c�digo dever� repetir.
    3� estrutura Do-while() -> repita at�()
       Ser� utilizada qnd quisermos que a condi��o seja testada ap�s.
	    Ela tbm � utilizada qnd eu n�o sei qts vezes um trecho
       de c�digo dever� repetir.
       
       Sintaxe do for(inicio; condi��o; incremento)
                  {
                     comando 1;
                      comando 2;
                        ...
                        comando n-1;
                  } 
                  onde: inicio: inicio da repeti��o
                        condi��o: condi��o de parada;
                        incremento: comportamento da repeti��o; 
                  for( i=1; i<=11; i++)  i = i + 1; 
                  {
                     soma = soma + i; -> somat�rio
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








