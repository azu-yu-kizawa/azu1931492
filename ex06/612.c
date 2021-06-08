#include <stdio.h>
#define NUMBER 7

void	intary_rcpy(int	v1[], const	int	v2[], int	n)
{
	int	i;

	i = 0;
	while (i < NUMBER)
	{
		v1[NUMBER - 1 - i] = v2[i];
		i++;
	}
	return ;
}

int	main(void)
{
	int	i;
	int	x1[NUMBER];
	int	x2[NUMBER]; //inputs come in here

	i = 0;
	while (i < NUMBER)
	{
		printf("x1[%d] = ", i);
		scanf("%d", &x2[i]);
		i++;
	}
	intary_rcpy(x1, x2, NUMBER);
	printf("----reverse----\n");
	i = 0;
	while (i < NUMBER)
	{
		printf("x2[%d] = %d\n", i, x1[i]);
		i++;
	}
	return (0);
}
