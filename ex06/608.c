#include <stdio.h>

int	ave_of(int	a, int	b);

int	main(void)
{
	int	a;
	int	b;

	printf("Input1: ");
	scanf("%d", &a);
	printf("Input2: ");
	scanf("%d", &b);
	printf("%d\n", ave_of(a, b));
	return (0);
}

int	ave_of(int	a, int	b)
{
	return ((a + b) / 2);
}
