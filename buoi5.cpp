#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
void chuanhoa(char s[50]);
void xoakt(char s[50]);
int demkytu(char s[50]);
void demtu(char s[50]);
int noichuoi(char s[50], char s2[50]);
int main()
{
	char s[50],s2[50];
	printf("\n Nhap chuoi: ");
	gets(s);
	chuanhoa(s);
	printf("\n Chuoi chuan hoa la: ");
	puts(s);
	demkytu(s);
	demtu(s);
	noichuoi(s,s2);
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

void demtu(char s[50])
{
	int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		demtu++;
	}
	printf("\n So tu: %d",demtu);
}

int noichuoi(char s[50], char s2[50])
{
	int i,j,size1,size2,size;
	fflush(stdin);
	printf("\n Nhap chuoi s2:");
	gets(s2);
	chuanhoa(s2);
	size1=strlen(s);
	size2=strlen(s2);
	size=size1+size2;
	j=0;
	for (i=size1;i<size;i++)
	{
		s[i]=s2[j];
			j++;
	}
	s[i]='\0';
	printf("\n Ket qua sau khi noi chuoi la:\n");
	printf("%s",s);
}
