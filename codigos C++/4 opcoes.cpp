/*  Estrutura de mulpipla escolha
    Switch/case

    Fa�a um programa que receba uma op��o do usu�rio e retorne
    o c�lculo escolhido. Para op��o considere o seguinte menu
      
            MENU DE OP��ES
            1 - Somar 2 Numeros           
            2 - Subtrair 2 Numeros
            3 - Multiplicar 2 Numeros
            4 - Dividir 2 Numeros            
   */
#include<stdio.h>
#include<locale.h>
//   #include<iostream>
//   #include<stdlib.h>
  
   main()
   {
   	  setlocale(LC_ALL,"Portuguese");
      int op;
	  float soma, subt, mult, dv, n1, n2;
      
	printf("*******************************\n");
	printf("*     MENU DE OP��ES          *\n");
	printf("* 1 - Somar 2 N�meros         *\n");
    printf("* 2 - Subtrair 2 N�meros      *\n");
	printf("* 3 - Multiplicar 2 N�meros   *\n");
    printf("* 4 - Dividir 2 N�meros       *\n");
    printf("*******************************\n");
    printf("\nEscolha uma op��o: ");
    scanf("%i",&op);

    switch(op)
      {
      	case 1:
      		printf("\nDigite o 1� N�mero: ");
      		scanf("%f",&n1);
      		printf("Digite o 2� N�mero: ");
      		scanf("%f",&n2);
      		soma = n1+n2;
      		printf("%.2f + %.2f = %.2f",n1,n2,soma);
      	break;
      	case 2:
			printf("\nDigite o 1� N�mero: ");
      		scanf("%f",&n1);
      		printf("\nDigite o 2� N�mero: ");
      		scanf("%f",&n2);
            subt = n1 - n2;
            printf("%.2f - %.2f = %.2f",n1,n2,subt);
      	break;
      	case 3:
      		printf("\nDigite o 1� N�mero: ");
      		scanf("%f",&n1);
      		printf("\nDigite o 2� N�mero: ");
      		scanf("%f",&n2);
            mult = n1 * n2;
            printf("%.2f * %.2f = %.2f",n1,n2,mult);
      	break;
      	case 4:
      		printf("\nDigite o 1� N�mero: ");
      		scanf("%f",&n1);
      		printf("Digite o 2� N�mero: ");
      		scanf("%f",&n2);
      	    if(n2 == 0)
			  printf("Erro!!!, N�o � poss�vel Dividir por Zero(0).");
			else
			{
			   dv = n1/n2;
			   printf("%.2f / %.2f = %.2f",n1,n2,dv);
			}	    	  
      	break;
        default:
        	printf("Voc� digitou uma op��o Inv�lida!!!");
	  }
   }
