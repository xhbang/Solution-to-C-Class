//ɨ�ף�̽�ף����(��Ȩл������)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9       //���Ը�N
//����
void bomb(int a[][N]);
void find_bomb(int a[][N]);
void printf(int a[][N]);
//������
void main()
{
	int arr[][N]={0};
	void bomb(int a[][N]);
	void find_bomb(int a[][N]);
	void printf(int a[][N]);
}
//��ʼ������
void bomb(int a[][N])
{
	int i, j, t;
	srand(time(NULL));
	for(t=0;t<N;t++)
	{	i=rand()%N;
		j=rand()%N;
		if(a[i][j]==N) {
			t--;
			continue;
		}
		a[i][j]=N;
	}	
}
//��ʼ������
void find_bomb(int a[][N])
{
	int i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(a[i][j]==N) {
				if(i!=0&&a[i-1][j]!=N)
					a[i-1][j]++;
				if(i!=N-1&&a[i+1][j]!=N)
					a[i+1][j]++;
				if(j!=0&&a[i][j-1]!=N)
					a[i][j-1]++;
				if(j!=N-1&&a[i][j+1]!=N)
					a[i][j+1]++;
				if(i!=0&&j!=0&&a[i-1][j-1]!=N)
					a[i-1][j-1]++;
				if(i!=0&&j!=N-1&&a[i-1][j+1]!=N)
					a[i-1][j+1]++;
				if(i!=N-1&&j!=0&&a[i+1][j-1]!=N)
					a[i+1][j-1]++;
				if(i!=N-1&&j!=N-1&&a[i+1][j+1]!=N)
					a[i+1][j+1]++;
			}
}			
//���
void printf(int a[][N])
{
	int i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(a[i][j]==N)
				printf("%4c",15);
			if(a[i][j]==0)
				printf("%4c",35);
			else
				printf("%4d",a[i][j]);

}
/*�ҵĴ���
1������д "int" ����a[][]��
2����rand����д()
 
*/