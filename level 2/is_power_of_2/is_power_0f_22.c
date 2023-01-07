#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	int div;
	
	div = 2;
	while (n / 2 > 2)
		n = n / 2;
	if (n % 2 == 1)
		return (0);
	else (n % 2 == 0);
		return (1);

	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	printf("É potencia de 2? %i\n", is_power_of_2(4));
	return (0);
}
