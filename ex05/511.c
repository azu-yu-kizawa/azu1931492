#include <stdio.h>
#define NUMBER 6

int	main(void)
{
	int	i = 0;
	int	j = 0;
	int	score[NUMBER][2];
	int	student[NUMBER] = {0};
	int	subject[2] = {0};

	i = 0;
	while (NUMBER > i)
	{
		printf("#%d...Jap: ", i+1);
		scanf("%d",&score[i][0]);
		printf("    Math: ");
		scanf("%d",&score[i][1]);
		i++;
	}

	// printf("score[0][0] = %d\n",score[0][0]);
	// printf("score[0][1] = %d\n",score[0][1]);
	// printf("score[1][0] = %d\n",score[1][0]);
	// printf("score[1][1] = %d\n",score[1][1]);
	// printf("score[2][0] = %d\n",score[2][0]);
	// printf("score[2][1] = %d\n",score[2][1]);
	// printf("score[3][0] = %d\n",score[3][0]);
	// printf("score[3][1] = %d\n",score[3][1]);
	// printf("score[4][0] = %d\n",score[4][0]);
	// printf("score[4][1] = %d\n",score[4][1]);
	// printf("score[5][0] = %d\n",score[5][0]);
	// printf("score[5][1] = %d\n",score[5][1]);
	printf("--------------------------------\n");
	printf("   #   Jap   Math  Total  Ave\n");
	i = 0;
	while(i < NUMBER)
	{
		printf("  %2d ", i);
		printf("  %3d ", score[i][0]);
		printf("  %3d ", score[i][1]);
		printf("  %3d ", (score[i][0] + score[i][1]));
		printf("  %3d ", (score[i][0] + score[i][1]) / 2);
		printf("\n");
		i++;
	}
	printf("--------------------------------\n");
	return (0);
}
