#include <stdio.h>

int main(){
	FILE *pt;
	char ch;
	if((pt=fopen("mydata.txt","w"))==NULL)
	{
		printf("Cab't create file\n");
		return 0;
	}
	printf("input the string\n");
	do{
		ch=getchar();
		fputc(ch,pt);
	}while(ch!=EOF);
	fclose(pt);

	if((pt=fopen("mydata.txt","r"))==NULL){
		printf("can't open file!\n");
		return 0;
	}

	ch=fgetc(pt);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(pt);
	}
	printf("\n");
	fclose(pt);

	return 0;
}