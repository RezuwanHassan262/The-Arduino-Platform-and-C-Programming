#include <stdio.h>

// fibonacci series

int main ()
{
  int z, x = 0, y = 1;
  if (y == 1)
    printf ("%d", x);
  z = x + y;
  while (z < 10)
    {
      printf ("%d", z);
      x = y;
      y = z;
      z = x + y;
    }
}
