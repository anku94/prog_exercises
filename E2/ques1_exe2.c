#include<stdio.h>

#include<stdlib.h>

int main()

{
   int i,n;

   float sum=0.0;

   printf("Enter Value of N (terms) : ");

   scanf("%d",&n);

   printf("\n\n");

  for(i=1;i<=n;i++)

   {
    printf("1/%d + ",i);

    sum+=1/(float)i;

   }

    printf("\n\nSum of Series upto %d terms = %f \n",n,sum);

   return 0;

}
