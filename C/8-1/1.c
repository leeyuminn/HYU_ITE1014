#include <stdio.h>

int add(int n1, int n2)
{
	return n1 + n2;
}
int sub(int n1, int n2)
{
	return n1 - n2;
}
int mul(int n1, int n2)
{
	return n1 * n2;
}
double div(double n1, double n2)
{
	return n1 / n2;
}
int mod(int n1, int n2)
{
	return n1 % n2;
}
void printMsg()
{
	printf("completed");
}
int main(void)
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int s, d, p, r;
	double di;
	s = add(n1, n2);
	printf("sum: %d\n", s);
	d = sub(n1, n2);
	printf("difference: %d\n", d);
	p = mul(n1, n2);
	printf("product: %d\n", p);
	di = div(n1, n2);
	printf("division: %lf\n", di);
	r = mod(n1, n2);
	printf("remainder: %d\n", r);
	printMsg();

	return 0;
}

