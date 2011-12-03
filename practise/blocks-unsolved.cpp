//write a matrix into a file with fread,fwrite

#include <stdio.h>
#define N 5

void main(){
	int a[N][N];
	FILE *fp=NULL;
	char filename[10];
	int i=0;
	int j=0;
	for(;i<N;i++)
		for(;j<N;j++)
			a[i][j]=i*j;
	printf("input a file name\n");
	gets(filename);

	if((fp=fopen(filename,"w"))==NULL){
		printf("can't open file\n");
		return ;
	}

//	fwrite(a,sizeof(int),N*N,fp);
	for(i=0;i<N;i++)
		fwrite(a[i],sizeof(int),N,fp);
	fclose(fp);
}