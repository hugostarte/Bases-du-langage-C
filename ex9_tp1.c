#include <stdio.h>
int main (void)
{
  char minuscule;
  unsigned char a = 'a';
  unsigned char A = 'A';
  unsigned int ecart;
  ecart = A - a;
  scanf("%c", &minuscule);
  printf("%c\n", minuscule+ecart);
}
