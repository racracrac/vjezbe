/* troznamenkasti broj obrnuto  */

#include <stdio.h>

main() 
{
	int a, b, x, y, z;
	printf("unesi broj sekundi:");
	scanf( "%d", &a );
	x = a / 3600;
	y = a % 3600 / 60;
	z = a % 3600 % 60;
	
	printf( "%d:%d:%d" , x, y, z );
	return 0;
}
