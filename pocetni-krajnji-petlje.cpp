/* pocetni krajnji petlje  */

#include <stdio.h>

main() 
{
	int i, j, k;
	printf("unesite pocetni broj:");
	scanf( "%d", &j );
	printf("unesite krajnji broj:");
	scanf( "%d", &k );
	
	if (j > k)
	{
		for (i = j; i > k - 1; i--)
		{
			printf("%d\n", i);
		}
	}
	
	for (i = j; i < k + 1; i++)
	{
		printf("%d\n", i);
	}	
	return 0;
}
