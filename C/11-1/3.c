#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p)
{
	Point pnew;
	pnew.xpos = p->xpos * 2;
	pnew.ypos = p->ypos * 2;
	return pnew;
}

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	Point p1 = {a,b};
	Point p2 = getScale2xPoint(&p1);
	printf("%d %d\n", p2.xpos, p2.ypos);
	return 0;
}


