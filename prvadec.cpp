/* zbroj znamenki  */

#include <stdio.h>

main() 
{
	float a;
	int x, z;
	printf("unesite broj a=");
	scanf( "%f", &a );
	x = a * 10;
	z = x % 10;
	printf( "Prva decimala: %d" , z );
	return 0;
}
