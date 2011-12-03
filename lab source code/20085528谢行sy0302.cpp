#include <stdio.h>
void main()
{
	int a1=6, a2, a3, a4, a5, a6=1;
	for(a2=2;a2<=5;a2++)
		for(a3=2;a3<=5;a3++)
			for(a4=2;a4<=5;a4++)
				for(a5=2;a5<=5;a5++)
					if (a2>a5&&a2>a3&&a4>a5&&a2!=a4&&a3!=a4&&a3!=a5)
					{printf("%d,%d,%d\n%d,%d,%d\n",a1,a2,a3,a4,a5,a6);
					 printf("\n");
					}
}