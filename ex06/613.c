#include <stdio.h>
#define NUMBER 5

int	searchr (const int	v[], int	key, int	n)
{
	int	i;

	i = NUMBER;
	while (i > 0)
	{
		if (key == v[i])
			return (i);
		i--;
	}
	return (0);
}

int	main(void)
{
	int i;
	int	x[NUMBER];
	int	key;

	i = 0;
	while(i < NUMBER)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
		i++;
	}
	printf("input key you are looking for: ");
	scanf("%d", &key);
	if (searchr(x, key, NUMBER) == 0)
		printf("Not in here\n");
	else
		printf("Your key %d is on %dth.\n", key, searchr(x, key, NUMBER) + 1);
	return (0);
}
