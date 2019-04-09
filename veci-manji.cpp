/* veci-manji  */

#include <stdio.h>

main() 
{
	int a, b;
	printf("unesi broj a:");
	scanf( "%d", &a );
	printf("unesi broj b:");
	scanf( "%d", &b );
	if (a > b)
	{
		printf("Broj %d je veci od %d", a, b);
	}
	else 
	{
		printf("Broj %d je veci od %d", b, a);
	}
	return 0;
}
