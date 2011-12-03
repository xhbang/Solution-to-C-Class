#include <stdio.h>
#include <math.h>
#define ESP 1e-7
void main()
{
	double f1(double x);
	double f11(double x);
	double f2(double x);
	double f21(double x);
	double root(double (*p1)(double x),double (*p2)(double x));
	double x;
	printf("input the x:");
	scanf("%lf",&x);
	printf("root=%f\n",root(f1,f11,x));
	printf("root=%f\n",root(f2,f21,x));
}


double root(double (*pl)(double x),double (*p2)(double x),double x)

{	if(fabs((*p1)(x)<ESP))
		return x;
	else
		return root(p1,p2,x-(*p1)(x)/(*p2)(x));
}

double f1(double x)
{	return 2*x*x*x-4*x*x+3*x-6;
}

double f11(double x)
{	return 6*x*x-8*x+3;
}

double f2(double x)
{	return x*x*x-8*x-2;
}

double f21(double x)
{	return 3*x*x-8;
}
