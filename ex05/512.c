#include <stdio.h>
#define NUMBER 4

int	main(void)
{
	int	i = 0; //Student#
	int	j = 0; //Subject#
	int	k = 0; //Submit
	int	total;
	int	score[NUMBER][3][2];

	while (k < 2)
	{
		i = 0;
		while (i < NUMBER)
		{
			j = 0;
			while (j < 3)
			{
				printf("Student%d - Sub%d(%d): ", (i + 1), (j + 1), (k + 1));
				scanf("%d", &score[i][j][k]);
				j++;
			}
			i++;
		}
	k++;
	}
	// printf("%d\n",score[0][0][0]);
	// printf("%d\n",score[0][1][0]);
	// printf("%d\n",score[0][2][0]);
	// printf("%d\n",score[1][0][0]);
	// printf("%d\n",score[1][1][0]);
	// printf("%d\n",score[1][2][0]);
	// printf("%d\n",score[2][0][0]);
	// printf("%d\n",score[2][1][0]);
	// printf("%d\n",score[2][2][0]);
	// printf("%d\n",score[3][0][0]);
	// printf("%d\n",score[3][1][0]);
	// printf("%d\n",score[3][2][0]);
	// printf("%d\n",score[0][0][1]);
	// printf("%d\n",score[0][1][1]);
	// printf("%d\n",score[0][2][1]);
	// printf("%d\n",score[1][0][1]);
	// printf("%d\n",score[1][1][1]);
	// printf("%d\n",score[1][2][1]);
	// printf("%d\n",score[2][0][1]);
	// printf("%d\n",score[2][1][1]);
	// printf("%d\n",score[2][2][1]);
	// printf("%d\n",score[3][0][1]);
	// printf("%d\n",score[3][1][1]);
	// printf("%d\n",score[3][2][1]);
	k = 0;
	while (k < 2)
	{
		printf("%dth Score\n", k + 1);
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 3)
			{
				printf("%4d", score[i][j][k]);
				j++;
			}
			i++;
			printf("\n");
		}
		k++;
	}
	printf("Total\n");
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			k = 0;
			total = 0;
			total = score[i][j][k] + score[i][j][k + 1];
			printf("%4d", total);
			j++;
		}
		i++;
		printf("\n");
	}
	return (0);
}
