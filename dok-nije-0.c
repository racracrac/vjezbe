#include <stdio.h>

main() 
{
	int x = 2, pb = 0, nb = 0;
	
	
	while (x != 0)
	{
		printf("unesite broj:");
		scanf( "%d", &x );
		if (x % 2 == 0)
		{
			pb++;
		} else 
		{
			nb++;
		}
		
	}
	printf("zbroj parnih: %d\n", pb - 1);
	printf("zbroj neparnih: %d\n", nb);

	

	return 0;
}
