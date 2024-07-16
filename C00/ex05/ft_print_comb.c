#include <unistd.h>

#include <sys/stat.h>

void stampa( char a, char b, char c)
{
	char	virgola[3];

	strcpy(virgola, ", ");
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if ( a != 55 || b != 56 || c != 57 )
	{
		write(1,&virgola,2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;

	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				stampa(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}

