/* n */

#include <stdio.h>

main() 
{
	int i, n, f;
	printf("Unesi n = ");
	scanf("%d", &n);
	
	for (i = 1; i < n + 1; i++)
	{
		f = f * i;	
	}
	printf("%d\n", f);
	return 0;
}
