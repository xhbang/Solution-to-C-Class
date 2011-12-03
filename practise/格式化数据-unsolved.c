//math
#include <stdio.h>
#include <stdlib.h>	//exit
#include <math.h>

#define PI 3.1415926

void main(){
	FILE *fp;
	int i,dec;
	double sinx,cosx,j;
	char filename[20];
	printf("cin\n");
	gets(filename);

	if((fp=fopen(filename,"wb"))==NULL){
		puts("OPEN ERROR");
		exit(1);
	}

	for(i=0;i<360;i+=10){
		j=i*PI/180;
		sinx=sin(j);
		cosx=cos(j);
		fprintf(fp,"%d,%f,%f",i,sin,cos);
	}

	fclose(fp);		//remember

	if((fp=fopen(filename,"rb"))==NULL){
		puts("READ ERROE\n");
		exit(1);
	}

	for(i=0;i<36;i++){
		fscanf(fp,"%d,%f,%f",&dec,&sinx,&cosx);
		printf("%d,%f,%f",dec,sinx,cosx);
	}

	fclose(fp);

}