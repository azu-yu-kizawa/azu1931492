#include <stdio.h>

int	listing(int *score);

int	main(void)
{
	int	i;
	int	score[7];

	i = 0;
	while (i < 7)
	{
		printf("Input#%d: ", i + 1);
		scanf("%d", &score[i]);
		i++;
	}
	listing(score);
	return (0);
}

int	listing(int *score)
{
	int	i;

	printf("List of Passing Exam\n");
	printf("----------------------\n");
	i = 0;
	while (i < 7)
	{
		if (score[i] >= 60)
			printf("#%d: %d\n", i, score[i]);
		i++;
	}
	printf("----------------------\n");
	return (0);
}
