#include <stdio.h>
#include <string.h>

void palindrome(char str[10])
{
	int len;
	len = strlen(str);
	int i;
	int j = 0;
	for(i=0; i < len/2; i++)
	{
	
		if(str[i] != str[len-1-i])
		{
			j=0;
		}
		else
		{
			j=1;
		}
	}
	if(j==0)
	{
		printf("This is not a palindrome\n");
	}
	else
	{
		printf("This is a palindrome\n");
	}

}
int main()
{
        char str[10];
        scanf("%s", str);
        palindrome(str);
        return 0;
}


