#include <stdio.h>

int	min2(int	a, int	b);

int	main(void)
{
	int	i;
	int	j;

	printf("1st: ");
	scanf("%d", &i);
	printf("2nd: ");
	scanf("%d", &j);
	printf("%d\n", min2(i, j));
	return (0);
}

int	min2(int	a, int	b)
{
	if (a > b)
		return (b);
	return (a);
}
