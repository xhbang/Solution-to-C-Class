//word counting
#include <stdio.h>

void main(){
	FILE *fp;
	int count=0,flag=1;
	char filename[20];
	char ch;

	printf("please enter your filename\n");
	
	gets(filename);

	if((fp=fopen(filename,"r"))==NULL){
		printf("Can't not open file\n");
		return ;
	}

	while((ch=fgetc(fp))!=EOF){
		switch(ch){
		case ' ':
		case '\t':
		case '\n':
			flag=1;
		default:
			if(flag){
				flag=0;
				count++;
			}
		}
	}

	fclose(fp);
	printf("The file '%s' contains '%d' words.\n",filename,count);
}