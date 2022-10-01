#include <stdio.h>

int main()
{
  int a,b,c;

  a = 1;
  b = ++a;

  a = 1;
  c = a++;

  printf("a=%d b=%d c=%d\n",a,b,c);
}
