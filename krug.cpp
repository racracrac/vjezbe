/* Opseg i površina kruga */

#include <stdio.h>

main() 
{
	float r, O, P;
	printf("unesite radius kruga r=");
	scanf( "%f", &r );
	O = 2 * r * 3.14;
	P = r * r * 3.14;
	printf( "O: %.2f\n" , O );
	printf( "P: %.2f" , P );
	return 0;
}
