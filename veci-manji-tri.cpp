/* veci-manji  */

#include <stdio.h>

main() 
{
	int a, b, c;
	printf("unesi broj a:");
	scanf( "%d", &a );
	printf("unesi broj b:");
	scanf( "%d", &b );
	printf("unesi broj c:");
	scanf( "%d", &c );
	if (a > b && a > c)
	{
		printf("Broj a=%d je veci od %d i %d", a, b, c);
	}
	else if(b > a && b > c)
	{
		printf("Broj b=%d je veci od %d i %d", b, a, c);
	}
	else 
	{
		printf("Broj c=%d je veci od %d i %d", c, b, a);
	}
	return 0;
}
