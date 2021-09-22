#include <stdio.h>
int main (void)
{
  unsigned char c='B';
  int j=13;
  unsigned char a='A';
  printf("c = %x en hexa et son adresse est %p,\n  j = %x en hexa et son adresse est %p,\n et A = %d en decimal et son adresse est %p,\n ",c,&c,j,&j,a,&a);
  return(0);
}
