#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 214
void main()
{
	void move_string(char *s, int n);
	void add_string(char *s1,char *s2, char *s3);
	char a[N], b[N], answer[N];
	printf("please input num a and b");
	gets(a);
	gets(b);
	int n=fabs(strlen(a)-strlen(b));
	if(strlen(a)<strlen(b))
		move_string(a,n);
	else
		move_string(b,n);
	add_string(a, b, answer);

		

}
void move_string(char *s, int n)
{
	int i;
	for(i=n;i>=0;i--)
		s[i+n]=s[i];
	for(i=0;i<=(strlen(*s)-1);i++)
		s[i]='0';
}
void add_string(char *s1, char *s2, char *s3)
{
	int carry=0, pos, i;
	pos=strlen(*s1);
	for(i=pos;i>=0;i--) {
		s3[pos+1]=(s2[pos]-'0'+s1[pos]-'0'+carry)%10+'0';
		carry=(s2[pos]-'0'+s1[pos]-'0'+carry)/10;
	}
	s3[0]=carry+'0';
	pos=s3[0]=='0'?1:0;
	puts(*(s3+pos));

}