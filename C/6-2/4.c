#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	int min, max;
	scanf("%d %d %d", &n1, &n2, &n3);

	max = n1 < n2 ? (n2 < n3 ? n3 : n2) : (n1 < n3 ? n3 : n1);
	min = n1 > n2 ? (n2 > n3 ? n3 : n2) : (n1 > n3 ? n3 : n1);

	printf("min: %d \nmax: %d\n",min,max);

	return 0;
}
