#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double x1, x2, y1, y2, q;
	scanf("%lf, %lf, %lf, %lf", &x1, &y1, &x2, &y2);
	q = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("%.3f\n", q);
	return 0;
}
