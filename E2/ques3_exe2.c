#include<stdio.h>

#include<stdlib.h>

int main()
{
    int n,i;
    long int sum =0,a=9;
    printf("enter the number of terms:");
    scanf("%ld",&n);
    for (i=1;i<=n;i++)
    { sum =sum+a;
    printf("%ld +",a);
    a=a*10+9;
    }
    printf("\nthe sum of the series = %ld\n",sum);
    return 0;
}
