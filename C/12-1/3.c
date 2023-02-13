#include <stdio.h>

void printString(const char* str)
{
	printf("%s\n\n",str);
}	

int main()
{
	char* Sstr[3]={"One","Two","Three"};
	void (*fptr)(const char* )= printString;

	fptr(Sstr[0]);
	fptr(Sstr[1]);
	fptr(Sstr[2]);
	return 0;
}

