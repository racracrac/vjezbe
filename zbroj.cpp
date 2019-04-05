/* zbroj znamenki  */

#include <stdio.h>

main() 
{
	int x, x1, x2, z;
	printf("unesite broj x=");
	scanf( "%d", &x );
	x1 = x / 10;
	/*x2 = x - x1 * 10;*/
	x2 = x % 10;
	z = x1 + x2;
	printf( "Zbroj znamenki: %d" , z );
	return 0;
}
