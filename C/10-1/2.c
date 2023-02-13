#include <stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
	int i;

	
	for(i=0; i<10; i++)
	{
		if(str[i] >= 'A' &&str[i] <='Z')
		{
			str[i]+=32;
		}
		else if(str[i] >= 'a'  &&str[i] <= 'z')
		{
			str[i]-=32;
		}
		if(str[i]==0)
		{
			break;
		}
	}
	printf("%s\n", str);
	return 0;
}
