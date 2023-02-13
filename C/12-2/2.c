#include <stdio.h>
#include <string.h>
#define MAX_LENGTH	20

int main()
{
	char list[10]={};
	for(int i=0; i<10; i++)
	{
		if(list[i]!="end")
		{
			printf("Enter a word (Enter 'end' to quit): ");
			scanf("%s\n",list[i]);
			int ret = strcmp(list[i], list[]);
			if(ret == 0)
			{
				printf("This word alredy exists. Please enter another word.");
		       	}
			else
			{
				break;
			}

		}
		else
		{
			int len = strlen(list);
			printf("%d words in the list:\n",&len);
			for(int j=0; j<len; j++)
			{
				printf("%s ",list[j]);
			}
			printf("\n");

		}

	}
	
}


