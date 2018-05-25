/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** 
*/

int	my_putchar(char q)
{
	write (1, &q, 1);
}

void my_swap( int *a, int *b)
{
	int carac1;
	int carac2;
	int c;

	carac1 = 65;
	carac2 = 69;
	a = &carac1;
	b = &carac2;
	c = carac1;
	*a = carac2;
	my_putchar(carac1);
	*b = c;
	my_putchar(carac2);
	
}

	


int main()
{
	my_swap(25, 74);
}
