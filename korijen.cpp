/* korijen  */

#include <stdio.h>
#include <math.h>

main() 
{
	int x;
	printf("unesite broj x=");
	scanf( "%d", &x );
	if (x > 0) 
	{
		printf( "korijen iz %d: %.2f\n" , x , sqrt(x));
	};
	if (x < 0)
	{
		printf( "korijen iz %d: %.2fi\n" , x , sqrt(-x));
	};
	return 0;
}
