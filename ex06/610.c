#include <stdio.h>
#define NUMBER 5

int	min_of(const int	v[], int n)
{
	int	i;
	int min = v[0];

	i = 1;
	while (i < n)
	{
		if (v[i] < min)
			min = v[i];
		i++;
	}
	return (min);
}

int	main(void)
{
	int	i;
	int	eng[NUMBER];
	int	mat[NUMBER];

	i = 0;
	while (i < NUMBER)
	{
		printf("[%d]Eng: ", i + 1);
		scanf("%d", &eng[i]);
		printf("[%d]Mat: ", i + 1);
		scanf("%d", &mat[i]);
		i++;
	}
	printf("min of eng: %d\n", min_of(eng, NUMBER));
	printf("min of mat: %d\n", min_of(mat, NUMBER));
	return (0);
}
