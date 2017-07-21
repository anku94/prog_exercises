#include <stdio.h>
#include <stdlib.h>

void print_pattern();
int main()
{
	print_pattern();
}
	void print_pattern()
{
    int i, j, n;
    printf("Enter value of rows ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
    for(j=0; j<i; j++)
    printf("*");
    printf("\n");
    }
     for(i=2; i<=n; i++)
    {
    for(j=0; j<=i-1; j++)
    printf("*");
    printf("\n");
    }
    return 0;
}
