#include <stdio.h>
#include <limits.h>
void main()
{
	int a, b, c, people=12;
	printf("hello,please enter the num a, b, c:");
	scanf("%d,%d,%d,&a,&b,&c");
	while(people<INT_MAX && people%5!=a || people%8!=b || people!= c)
		people++;
	if(people<INT_MAX£©{
	 printf("oh,yeah,this is what u want:");
	 printf("%d",people);
	}
	else
	printf("no solution!")
}