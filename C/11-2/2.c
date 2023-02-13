#include <stdio.h>

typedef struct
{
	char name[7];
	int score;
} Person;

void printScoreStar(Person* persons, int len)
{
	int i, j, z=0;
	for(i=0; i<len;i++)
	{
		printf("%s   ",persons[i].name);
		z=persons[i].score/5;
		
		for(j=0; j<z; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	Person person[3];
	scanf("%s %d",person[0].name, &person[0].score);
	scanf("%s %d",person[1].name, &person[1].score);
	scanf("%s %d",person[2].name, &person[2].score);
	int len;
	len=3;
	printScoreStar(person,len);
	return 0;
}


