#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <iostream>

int main()
{
	 system("color 4f");
    setlocale(LC_ALL, "Portuguese");
    int op, y;
    float x, resultado;
    x=0;
    y=0;
    resultado=0;
    op=0;
    char nome[100];
	char lanche[100];
   
    
    	printf ("\n\n OLA SEJA BEM VINDO AO RESTAURANTE TENDA DOS MILAGRES!!!\n\n");
		printf (" ESTAMOS ENTRE OS MELHORES RESTAURANTE DO BRASIL!!!\n\n");

    	printf("Digite o seu Nome?\n\n");
    	gets (nome);
    	printf ("\n\t Ola cliente: %s\n\n",nome);
 

    	printf(" \n %s Escolha uma das opcoes abaixo:\n\n",nome);
		printf ("\t(1)...lanche de carne (R$20.00)\n\n");
		printf ("\t(2)...Lanche de frango (R$16.00)\n\n");
		printf ("\t(3)...Batata frita (R$6.00)\n\n");
		printf ("\t(4)...Refrigerante (R$4.00)\n\n");
		
		printf(" \n\tDigite o numero da opcao desejada:\n ");
		scanf("%d", &op);
		
		switch (op)
    {
    case 1:
        printf("\tVoce escolheu o LANCHE DE CARNE R$20.00.\n\n" );
        break;
 
    case 2:
        printf("\t Voce escolheu o LANCHE DE FRANGO R$16.00.\n\n ");
        break;
 
    case 3:
        printf(" \t Voce escolheu o BATATA FRITA R$6.00\n\n");
        break;
        
        case 4:
        printf(" \t  Voce escolheu o REFRIGERANTE R$ 4.00.\n\n");
        break;
 
    default:
        printf("\n Voce digitou uma opção invalida!\n");
    }
    
    	printf("\n\n\n Deseja um adicional: \n\n");
     	printf ("\t(5)...Salada (R$2.00)\n\n");
		printf ("\t(6)...Maionese (R$1.00)\n\n");
		printf ("\t(7)...Batata frita (R$6.00)\n\n");
		scanf("%d", &y);
		
		switch(y)
		{
			case 5:
				printf("\n\t\t Adicional de Salada com o valor de R$2.00\n");
				break;
				
				case 6:
					printf("\n\t\t Adicional de MAIONESE com o valor de R$1.00 \n\n");
					break;
					
					case 7:
						printf("\n\t\t Adicional de BATATA FRITA com o valor de R$6.00\n\n");
						break;
						
						default:
							printf("\t\tVoce digitou a opcao errada!!\n\n");
		}
		
		printf("\n\t\tDigite o valor do adicional:\n");
    	scanf("%f", &x);
    	
    	printf ("\n\t\t Ola cliente: %s\n\n",nome);
    	
    switch (op)
    {
    case 1:
        printf("\t\tVoce escolheu o LANCHE DE CARNE R$20.00.\n\n" );
        resultado = x + 20.00;
        printf(" \n\t\tCom adicional o valor e: %.2f\n\n", resultado);
        break;
 
    case 2:
        printf("\n\t Voce escolheu o LANCHE DE FRANGO R$16.00.\n\n ");
        resultado = x + 16.00;
        printf("\n\t\tCom adicional o valor e: %.2f \n\n", resultado);
        break;
 
    case 3:
        printf("\n \t Voce escolheu o BATATA FRITA R$6.00\n\n");
        resultado = x + 6.00;
        printf("\n\t\tCom adicional o valor e: %.2f \n\n", resultado);
        break;
        
        case 4:
        printf(" \n\t  Voce escolheu o REFRIGERANTE R$ 4.00.\n\n");
        resultado = x + 4.00;
        printf("\n\t\t Com adicional o valor e: %.2f \n\n", resultado);
        break;
 
    default:
        printf("\n\t Voce digitou uma opcao invalida!\n\n\n");
    }
  printf("\t\t\t ******Agradecemos a preferencia***** \n\n\n");

      system("pause");
     return 0;
}