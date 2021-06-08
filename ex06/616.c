#include <stdio.h>
#define NUMBER 4
#define SUB 3
#define TRY 2

void	total_cal(const int	score[NUMBER][SUB][TRY], int	n)
{
	int	i;
	int	j;
	int k;
	int	total[NUMBER][SUB];


	i = 0;
	while (i < NUMBER)
	{
		j = 0;
		while(j < SUB)
		{
			total[i][j] = score[i][j][0] + score[i][j][1];
			printf("%4d",total[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return ;
}

int	main(void)
{
	int	i;
	int	j;
	int	k;
	int	score[NUMBER][SUB][TRY];
	int	total[TRY];

	k = 0;
	while(k < TRY)
	{
		printf("--%dth Trial--\n", k + 1);
		i = 0;
		while(i < NUMBER)
		{
			j = 0;
			while (j < SUB)
			{
				printf("#%d - Sub[%d]: ", i + 1, j + 1);
				scanf("%d", &score[i][j][k]);
				j++;
			}
			i++;
		}
		k++;
	}
	printf("----Total----\n");
	total_cal(score, NUMBER);
	return (0);
}
