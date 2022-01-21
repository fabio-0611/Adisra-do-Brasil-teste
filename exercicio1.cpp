#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)

{
	system("color 4f");
    setlocale (LC_ALL, "Portuguese_Brazil");
	float valorReal, valorDolar;
	
   
		printf ("\n\n Digite o valor em reais a ser convertido:\n\n");
		scanf("%f", &valorReal);

		valorDolar = valorReal*5.44;
		printf ("Valor em dólar $%.2f\n\n ",valorDolar);
		system("pause");
		return 0;
}

