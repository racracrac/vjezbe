/* primjer switch  */

#include <stdio.h>

main() 
{
	int x;
	A: printf("unesite broj dana:");
	scanf( "%d", &x );
	switch(x)
	{
		case 1: printf( "Ponedjeljak"); break;
		case 2: printf( "Utorak"); break;
		case 3: printf( "Srijeda"); break;
		case 4: printf( "Četvrtak"); break;
		case 5: printf( "Petak"); break;
		case 6: printf( "Subota"); break;
		case 7: printf( "Nedjelja"); break;
		default: goto A; break;
	}
	return 0;
}
