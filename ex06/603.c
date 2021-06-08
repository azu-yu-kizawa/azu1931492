#include <stdio.h>

int	cube(int	x);

int	main(void)
{
	int i;

	printf("Number: ");
	scanf("%d", &i);
	printf("%d\n",cube(i));
	return (0);
}

int	cube(int	x)
{
	return (x * x * x);
}
