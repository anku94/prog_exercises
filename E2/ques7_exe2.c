#include <stdio.h>
#include <stdlib.h>

void print_pattern();
int main()
{
	print_pattern();
}
	void print_pattern()
{
    int row, c, temp;
    int n;
    printf("no.of rows");
   scanf("%d",&n);

   temp = n;

   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
        temp--;


      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         printf("*");

      printf("\n");
   }

    return 0;
}
