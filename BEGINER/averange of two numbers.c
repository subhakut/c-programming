/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int max_val;
  int min_val;
  scanf ("\n%d\n%d", &max_val, &min_val);
  int ave_val;
  ave_val = (min_val + max_val) / 2;
  printf ("\n%d", ave_val);

  return 0;
}
