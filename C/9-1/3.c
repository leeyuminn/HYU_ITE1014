#include <stdio.h>

int main()
{
	int ss=0;
	char st[20];
	scanf("%s",st);
	while(st[ss]!='\0')
	{
		ss++;
	}
	printf("%d\n",ss);

	return 0;
}

