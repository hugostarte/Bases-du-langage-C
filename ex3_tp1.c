#include <stdio.h> 
int main (void)
{
  int a, b;
  a=16;
  b=016;  
  printf ("Pourquoi la variable a (=%d) a une valeur différente de la variable b (=%d) ? \n", a, b);
  // Car il interprete 016 comme un entier codé en octal  -> 016 = 14.
  eturn(0);
}
