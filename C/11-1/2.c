#include <stdio.h>

typedef struct
{
	char name[10];
	int age;
}Point;

int main()
{
	Point pp1;
	scanf("%s %d",pp1.name, &pp1.age);
	printf("name: %s\n", pp1.name);
	printf("age: %d\n", pp1.age);
	return 0;
}

