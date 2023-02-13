#include <stdio.h>

int main(void)
{
while(1)
{
	char c1;
	scanf(" %c", &c1);
	if(c1>='A'&&c1<='Z')
	{
		printf("->%c\n",c1+32);
	}
        else if(c1>='a'&&c1<='z')
	{
		printf("->%c\n",c1-32);
	}
        else if(c1>='0'&&c1<='9')
	{
		printf("->%c\n",c1);
	}
        else
	{
		printf("exit");
		break;
	}
}
}

