#include <stdio.h>

#define NUMBER 80

int	main(void)
{
	int i;
	int	j;
	int	num;
	int	score[NUMBER];
	int	bumpu[11] = {0};

	printf("input #people: ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("input scores of %d: ", num);
		scanf("%d", &score[i]);
		bumpu[score[i] / 10]++;
		i++;
	}
	// printf("score[0]: %d\n", score[0]);
	// printf("score[1]: %d\n", score[1]);
	// printf("score[2]: %d\n", score[2]);
	// printf("score[3]: %d\n", score[3]);
	// printf("bumpu[0]: %d\n", bumpu[0]);
	// printf("bumpu[1]: %d\n", bumpu[1]);
	// printf("bumpu[2]: %d\n", bumpu[2]);
	// printf("bumpu[3]: %d\n", bumpu[3]);
	// printf("bumpu[4]: %d\n", bumpu[4]);
	// printf("bumpu[5]: %d\n", bumpu[5]);
	// printf("bumpu[6]: %d\n", bumpu[6]);
	// printf("bumpu[7]: %d\n", bumpu[7]);
	// printf("bumpu[8]: %d\n", bumpu[8]);
	// printf("bumpu[9]: %d\n", bumpu[9]);
	// printf("bumpu[10]: %d", bumpu[10]);
	i = 0;
	while (i < 10)
	{
		j = 1;
		printf("%2d-%2d:", 10 * i, 10 * (i + 1) - 1);
		while(j <= bumpu[i])
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	j = 0;
	printf("  100:");
	while (j < bumpu[i])
	{
		printf("*");
		j++;
	}
	printf("\n");
	return (0);
}
