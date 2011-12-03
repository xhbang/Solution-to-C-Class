//file copying

#include <stdio.h>

void main(){
	char source[80],target[80];
	FILE *in,*out;
	char ch;

	printf("enter the source filename\n");
	gets(source);

	printf("enter the target filename\n");
	gets(target);

	if((in=fopen(source,"rb"))==NULL){
		printf("can't open source file!\n");
		return ;
	}

	if((out=fopen(target,"wb"))==NULL){
		printf("can't open target file!\n");
		return ;
	}
	
	while(1){
		ch=fgetc(in);
		if(!feof(in))
			fputc(ch,out);
		else
			break;
	}

	fclose(in);
	fclose(out);
/*
	if((in=fopen(target,"r"))==NULL){
		printf("can't open target\n");
		return ;
	}

	while((ch=fgetc(in))!=EOF)
		printf("%c\n",ch);

  
*/	
	  
}