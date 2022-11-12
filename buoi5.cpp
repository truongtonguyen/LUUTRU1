#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int xoa(char s[50], int vitrixoa);
int chuanhoa(char s[50]);
int xoakt(char s[50]);

int main()
{
   char s[50];
   printf("\n Nhap chuoi:");
   gets(s);
   chuanhoa(s);
   printf("\n Chuoi chuan hoa:");
   puts(s);
return 0;
}

int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	   {
	   	if(s[i]=' '&& s[i+1]!=' ')
	   	  s[i+1]=s[i+1]-32;
	   }
}

int xoa(char s[50], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++)
	 s[i]=s[i+1];
	s[n-1]='\0';
}

int xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	  if(s[i]==' '&& s[i+1]==' ')
	    {
	    	xoa(s,i);
	    	i--;
	    }
	if(s[0]==' ')
	  xoa(s,0);
	if(s[strlen(s)-1]==' ')
	  xoa(s,strlen(s)-1);
}
