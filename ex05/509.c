#include <stdio.h>

#define NUMBER 80

int	main(void)
{
	int i;
	int	j;
	int	num;
	int	score[NUMBER];
	int	bumpu[11] = {0};
	int	bumpu_max;

	printf("input #people: ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("input scores of %d: ", num);
		scanf("%d", &score[i]);
		bumpu[score[i] / 10]++;
		i++;
	}
	i = 0;
	bumpu_max = 0;
	while (i <= 10)
	{
		if (bumpu[i] > bumpu_max)
			bumpu_max = bumpu[i];
		i++;
	}
	i = bumpu_max; //i = 3
	while (i >= 1) // i = 3,2,1
	{
		j = 0;
		while (j <= 10) //j = 0,1,2,3,4,5,6,7,8,9,10
		{
			if (bumpu[j] >= i) //bumpu[0] >= 3, bumpu[1] >= 3,...bumpu[10] = 3
				printf("  * "); //bumpu[0] >= 2, ...
			else
				printf("    ");
			j++;
		}
		printf("\n");
		i--;
	}
	i = 0;
	printf("------------------------------------------\n");
	while (i < 11) //loop: 0,1,2,3,4,5,6,7,8,9,10
	{
		printf("%4d", i * 10); // 0,10,20,...100
		i++;
	}
	printf("\n");
	return (0);
}
