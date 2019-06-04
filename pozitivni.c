#include <stdio.h>

/*
main() 
{
	int x, z;
	A: printf("unesite broj:");
	scanf( "%d", &x );
	
	while (x > 0)
	{
		z = z + x;
		goto A;
	}
	printf("%d", z);
	

	return 0;
}
*/


main() 
{
	int x = 1, z = 0;
	
	while (x > 0)
	{
		printf("unesite broj:");
		scanf( "%d", &x );
		z = z + x;
	}
	z = z - x;
	printf("%d", z);
	

	return 0;
}
