/* troznamenkasti broj obrnuto  */

#include <stdio.h>

main() 
{
	int a;
	printf("unesi cijeli broj:");
	scanf( "%d", &a );
	if (a > 0)
	{
		printf("Broj %d je pozitivan", a);
	}
	else 
	{
		printf("Broj %d je negativan", a);
	}
	return 0;
}
