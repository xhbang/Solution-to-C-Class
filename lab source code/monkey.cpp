#include <stdio.h>
#define N 100
void main()
{
	int m, n, d, i, count, a[N];  //m是数量  n是间隔数  d  i  N是最多是100只，前面定义的
	printf("input n and m:");
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
		a[i]=i+1;
	count=0;
	d=0;
	printf("小猴子是:");

	while(d<n-1)                  //n-1 个被淘汰
		for(i=0;i<n;i++)
			if(a[i]!=0)
			{	count+=1;
				if(count==m)                    //m
				{	printf("%3d",i);
					a[i]=0;
					count=0;
					d+=1;
				}
			}
	for(i=0;i<n;i++)
		if(a[i]!=0)              //只有1只没有被标记为0
			printf("猴王是:%d\n",i);
}