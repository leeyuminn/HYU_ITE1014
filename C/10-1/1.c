#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10];
	char str2[10];

	scanf("%s %s", str1, str2);

	printf("str1: %s\n",str1);
	printf("str2: %s\n",str2);
	printf("length of str1: %ld\n", strlen(str1));
	printf("length of str2: %ld\n", strlen(str2));
	strcat(str1, str2);
	printf("str1+str2: %s\n",str1);
	if(strcmp(str1,str2) == 0)
	{
		printf("same\n");
	}
	else printf("not same\n");

	return 0;
}
