/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int
main ()
{
  char str1[100], str2[100];
  scanf ("%[^\n]s", str1);
  int n = strlen (str1) - 1;
  for (int i = 0; i <= n; i++)
    {
      str2[i] = str1[n - i];
    }
  printf ("%s", str2);

  return 0;
}
