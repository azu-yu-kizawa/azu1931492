#include <stdio.h>
#define NUMBER 7

int	search_idx (const int	v[], int	idx[], int	key, int	n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < NUMBER)
	{
		if (key == v[i])
			idx[count++] = i;
		i++;
	}
	return (count);
}

int	main(void)
{
	int i;
	int	x[NUMBER];
	int	index[NUMBER];
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
	i = 0;
	printf("Your key %d found %dtimes on\n", key, search_idx (x,index, key, NUMBER));
	if (search_idx(x, index, key, NUMBER) == 0)
		printf("Not in here\n");
	else
	{
		while (search_idx(x, index, key, NUMBER) > i)
		{
			printf("x[%d] = %d\n", index[i], x[index[i]]);
			i++;
		}
	}
	return (0);
}
