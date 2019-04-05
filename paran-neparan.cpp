/* paran-neparan  */

#include <stdio.h>

main() 
{
	int a;
	printf("unesi cijeli broj:");
	scanf( "%d", &a );
	if (a % 2 == 0)
	{
		printf("Broj %d je paran", a);
	}
	else 
	{
		printf("Broj %d je neparan", a);
	}
	return 0;
}
