
#include<stdio.h>
#include"app.h"

int main()
{
	int a;
	int	b;
	int c;

	printf("hello Ubuntu!\n");
	printf( "Input a value:\n" );
	scanf( "%d", &a );
	printf( "Inout b value:\n" );
	scanf( "%d", &b );
	//	c = func(a,b);
	c = a + b;
	printf("The end is %d\n", c);
	
	return 0;
}
