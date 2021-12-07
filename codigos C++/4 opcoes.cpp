/*  Estrutura de mulpipla escolha
    Switch/case

    Faça um programa que receba uma opção do usuário e retorne
    o cálculo escolhido. Para opção considere o seguinte menu
      
            MENU DE OPÇÕES
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
	printf("*     MENU DE OPÇÕES          *\n");
	printf("* 1 - Somar 2 Números         *\n");
    printf("* 2 - Subtrair 2 Números      *\n");
	printf("* 3 - Multiplicar 2 Números   *\n");
    printf("* 4 - Dividir 2 Números       *\n");
    printf("*******************************\n");
    printf("\nEscolha uma opção: ");
    scanf("%i",&op);

    switch(op)
      {
      	case 1:
      		printf("\nDigite o 1º Número: ");
      		scanf("%f",&n1);
      		printf("Digite o 2º Número: ");
      		scanf("%f",&n2);
      		soma = n1+n2;
      		printf("%.2f + %.2f = %.2f",n1,n2,soma);
      	break;
      	case 2:
			printf("\nDigite o 1º Número: ");
      		scanf("%f",&n1);
      		printf("\nDigite o 2º Número: ");
      		scanf("%f",&n2);
            subt = n1 - n2;
            printf("%.2f - %.2f = %.2f",n1,n2,subt);
      	break;
      	case 3:
      		printf("\nDigite o 1º Número: ");
      		scanf("%f",&n1);
      		printf("\nDigite o 2º Número: ");
      		scanf("%f",&n2);
            mult = n1 * n2;
            printf("%.2f * %.2f = %.2f",n1,n2,mult);
      	break;
      	case 4:
      		printf("\nDigite o 1º Número: ");
      		scanf("%f",&n1);
      		printf("Digite o 2º Número: ");
      		scanf("%f",&n2);
      	    if(n2 == 0)
			  printf("Erro!!!, Não é possível Dividir por Zero(0).");
			else
			{
			   dv = n1/n2;
			   printf("%.2f / %.2f = %.2f",n1,n2,dv);
			}	    	  
      	break;
        default:
        	printf("Você digitou uma opção Inválida!!!");
	  }
   }
