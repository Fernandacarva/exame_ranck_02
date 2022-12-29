#include <stdio.h>

void ft_lower(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				av[i][j] += 32;
			j++;
		}
		printf("%s\n", av[i]);
		i++;	
	}
}

void  ft_upper_letter(char **av)
{
  int  i;
  int  j;

  i = 0;
  while (av[i])
    {
      j = 0;
      while (av[i][j])
        {
          if (av[i][j] >= 'A')
          j++;
        }
      i++;
    }
}

int  main(int ac, char **av)
{
  if (ac > 1)
  {
    ft_lower(av);
    ft_upper_letter(av);
  }
}