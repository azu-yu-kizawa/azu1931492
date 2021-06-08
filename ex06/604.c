#include <stdio.h>

int	sqr (int	x);
int	pow4(int	x);

int	main(void)
{
	int i;

	printf("input: ");
	scanf("%d", &i);
	printf("sqr: %d\n", sqr(i));
	printf("pow: %d\n", pow4(i));
	return (0);
}

int	sqr (int	x)
{
	return (x * x);
}

int	pow4(int	x)
{
	return (x * x * x * x);
}
