#include <stdio.h>

int	sumup(int	n);

int	main(void)
{
	int i;

	printf("input: ");
	scanf("%d", &i);
	printf("%d\n", sumup(i));
	return (0);
}

int	sumup(int	n)
{
	int	answer;

	answer = (1 + n) * n / 2;
	return(answer);
}
