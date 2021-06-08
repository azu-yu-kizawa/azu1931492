#include <stdio.h>

int	min3(int	a, int	b, int	c);

int	main(void)
{
	int i;
	int	j;
	int	k;

	printf("1st: ");
	scanf("%d", &i);
	printf("2nd: ");
	scanf("%d", &j);
	printf("3rd: ");
	scanf("%d", &k);
	printf("%d\n",min3(i, j, k));
	return (0);
}

int	min3(int	a, int	b, int	c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}
