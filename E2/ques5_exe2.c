#include <stdio.h>
#include <stdlib.h>

void print_pattern();
int main()
{
	print_pattern();
}
	void print_pattern()
{
    int rows, a, b, space;

	printf("Enter number of rows:");
	scanf("%d", &rows);
	space = rows - 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space ; a++ )
			printf("");

		for ( a = 1 ; a <= b ; a++)
			printf("*");
		printf("\n");
	}

	space = 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space; a++)
			printf("");

		for ( a = 1 ; a <= rows-b+1 ; a++ )
			printf("*");
		printf("\n");
	}

    return 0;
}
