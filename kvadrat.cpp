/* Opseg i povr�ina kvadrata */

#include <stdio.h>

main() 
{
	float a, O, P;
	printf("unesite stranicu kvadrata a=");
	scanf( "%d", &a );
	O = 4 * a;
	P = a * a;
	printf( "O: %d\n" , O );
	printf( "P: %d" , P );
	return 0;
}
