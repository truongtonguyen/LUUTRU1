#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
void chuanhoa(char s[50]);
void xoakt(char s[50]);
int demkytu(char s[50]);
int main()
{
	char (s[50]);
	printf("\n Nhap chuoi: ");
	gets(s);
	chuanhoa(s);
	printf("\n Chuoi chuan hoa la: ");
	puts(s);
	demkytu(s);
}
void chuanhoa(char s[50])
{  int i=0;
    strlwr(s);
    xoakt(s);
    s[0]=s[0]-32;
    for(int i=0;i<strlen(s);i++)
       {
       	if(s[i]==' '&& s[i+1]!=' ')
       	  s[i+1]=s[i+1]-32;
       }
}
   
void xoa(char s[50], int vitrixoa )
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}      
 void xoakt(char s[50])
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

int demkytu(char s[50])
{
	int demkytu=0;
	char c,c1;
	printf("\n Nhap mot ky tu:");
	scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
		demkytu++;
	}
	printf("\n So ky tu: %d",demkytu);
}
