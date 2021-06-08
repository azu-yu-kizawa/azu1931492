#include <stdio.h>
#define NUMBER 7

void	rev_intary(int	v[], int	n)
{
	int	i;
	int	tmp;

	i = 0;
	while(i < n/2)
	{
		tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
		i++;
	}
	return ;
}

int	main(void)
{
	int	i;
	int	x[NUMBER];

	i = 0;
	while (i < NUMBER)
	{
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
		i++;
	}
	rev_intary(x, NUMBER);
	printf("----reverse----\n");
	i = 0;
	while (i < NUMBER)
	{
		printf("x[%d] = %d\n", i, x[i]);
		i++;
	}
	return (0);
}
