#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <conio.h>
int main()
{
  int contador, numero;
 system("color 4f");
    setlocale(LC_ALL,"Portuguese");

  for (contador = 1; contador <= 5; contador = contador+1)
  {
    printf("Inicio do laco. Passo %d\n\n", contador);

    if ((contador % 2) == 0)
    {
      printf("Terminado antes do tempo....\n\n");
      continue;
    }
    printf ("Final do Laco. Passo %d\n\n", contador);
  }
  getch();
}
 