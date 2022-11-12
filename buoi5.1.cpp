#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void chon1(char s[50]);
void xoakt(char s[50]);
int demkytu(char s[50]);
void demtu(char s[50]);
int noichuoi(char s[50],char s2[50]);
int main()
{ char s[50], s2[50], key;
while(true)
{
system("cls");
printf("************************************\n");
printf("**       THAO TAC TREN CHUOI      **\n");
printf("**   4. Kiem tra doi xung         **\n");
printf("**   1. Nhap va chuan hoa chuoi   **\n");
printf("**   2. Dem so tu trong chuoi     **\n");
printf("**   3. Ghep chuoi                **\n");
printf("**   5. In chuoi dao nguoc        **\n");
printf("**   0. Thoat                     **\n");
printf("************************************\n");
fflush(stdin);
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
 fflush(stdin);
 chon1(s);
 printf("\nBam phim bat ky de tiep tuc!");
 case 3:
 printf("\nBam phim bat ky de tiep tuc!");
 getch();
 break;
 case 2:
 printf("\nBam phim bat ky de tiep tuc!");
 getch();
 break;
 getch();
 break;
 case 4:
 printf("\nBam phim bat ky de tiep tuc!");
 break;
 case 5:
 printf("\nBam phim bat ky de tiep tuc!");
 getch();
 break;
 case 0:
 exit(1);
 default:
 printf("\nKhong co chuc nang nay!");
 printf("\nBam phim bat ky de tiep tuc!");
 getch();
 break;
}
}
}


void chon1(char s[50])
{  int i=0;
    
	printf("\n Nhap chuoi: ");
	gets(s);
    strlwr(s);
    xoakt(s);
    s[0]=s[0]-32;
    for(int i=0;i<strlen(s);i++)
       {
       	if(s[i]==' '&& s[i+1]!=' ')
       	  s[i+1]=s[i+1]-32;
       }
}

