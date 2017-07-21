#include <stdio.h>
#include <stdlib.h>

void print_pattern();
int main()
{
    print_pattern();
}
void print_pattern()
{   
    int row, c, n, temp;

    printf("Enter the rows ");
    scanf("%d",&n);

    temp = n;

    for ( row = 1 ; row <= n ; row++ )
    {
        for ( c = 1 ; c < temp ; c++ )
            temp;

        for ( c = 1 ; c <= row ; c++ )
            printf("*");

        printf("\n");
    }

    return 0;
}
