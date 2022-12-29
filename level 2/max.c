#include <stdio.h>

int max( int *tab, unsigned int len)
{
	int result;
	int i = 0;
	result = tab[i];
	
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return result;
}

int  main(void)
{
  int  teste[] = {1, 2, 3, 4, 5000};

  printf("max: %d\n", max(teste, 5));
}