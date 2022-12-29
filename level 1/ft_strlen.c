#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
	char *teste;

	teste = "fernanda";
	printf("valor: %d\n", ft_strlen(teste));

}