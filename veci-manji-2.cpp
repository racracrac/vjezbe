/* veci-manji-2  */

#include <stdio.h>

main() 
{
	int max, a, b, c;
	printf("unesi broj a:");
	scanf( "%d", &a );
	printf("unesi broj b:");
	scanf( "%d", &b );
	printf("unesi broj c:");
	scanf( "%d", &c );
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	printf("broj %d je najveci", max);
	return 0;
}
