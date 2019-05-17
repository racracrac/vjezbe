/* datum  */

#include <stdio.h>

main() 
{
	int dd, mm, gggg;
	A: printf("unesite datum:");
	scanf( "%d", &dd );
	scanf( "%d", &mm );
	scanf( "%d", &gggg );
	
	switch(mm)
	{
		case 1: printf( "%d. Siječnja %d.", dd, gggg); break;
		case 2: printf( "%d. Veljače %d.", dd, gggg); break;
		case 3: printf( "%d. Ožujaka %d.", dd, gggg); break;
		case 4: printf( "%d. Travanja %d.", dd, gggg); break;
		case 5: printf( "%d. Svibnja %d.", dd, gggg); break;
		case 6: printf( "%d. Lipanja %d.", dd, gggg); break;
		case 7: printf( "%d. Srpanja %d.", dd, gggg); break;
		case 8: printf( "%d. Kolovoza %d.", dd, gggg); break;
		case 9: printf( "%d. Rujna %d.", dd, gggg); break;
		case 10: printf( "%d. Listopada %d.", dd, gggg); break;
		case 11: printf( "%d. Studenog %d.", dd, gggg); break;
		case 12: printf( "%d. Prosinca %d.", dd, gggg); break;
		default: goto A; break;
	}
	return 0;
}
