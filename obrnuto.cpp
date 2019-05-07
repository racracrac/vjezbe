/* troznamenkasti broj obrnuto  */

#include <stdio.h>

main() 
{
	int a, b, x, y, z;
	printf("unesite broj a=");
	scanf( "%d", &a );
	x = a % 100;
	y = a / 100 % 10;
	z = a / 100;
	b = x * 100 + y * 10 + z;
	printf( "Obrnuto: %d\n" , x );
	return 0;
}
