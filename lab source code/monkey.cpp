#include <stdio.h>
#define N 100
void main()
{
	int m, n, d, i, count, a[N];  //m������  n�Ǽ����  d  i  N�������100ֻ��ǰ�涨���
	printf("input n and m:");
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
		a[i]=i+1;
	count=0;
	d=0;
	printf("С������:");

	while(d<n-1)                  //n-1 ������̭
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
		if(a[i]!=0)              //ֻ��1ֻû�б����Ϊ0
			printf("������:%d\n",i);
}