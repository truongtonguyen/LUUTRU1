#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct SinhVien
{
	char Masv[10];
	char Hotensv[30];
	char Phai[10];
	int Namsinh;
	char Nganhhoc[30];
	float Kqcuoikhoa;
	char Xeploai[20];
	char Quequan[30];
};

typedef struct SinhVien SINHVIEN;
void Nhapsv(SINHVIEN &x);
int main()
{
	int n,x,key;
	while(true)
	 {
	 	system("cls");
	 	printf("************************************************\n");
	 	printf("**     CHUONG TRINH QUAN LY SINH VIEN         **\n");
	 	printf("**     1.Nhap DS sinh vien                    **\n");
	 	printf("**     2.In DS sinh vien                      **\n");
	 	printf("**     3.Sap xep theo ket qua cuoi khoa       **\n");
	 	printf("**     4.In sinh vien Gioi, Xuat sac          **\n");
	 	printf("**     5.Tim kiem sinh vien theo ma so        **\n");
	 	printf("**     0.Thoat                                **\n");
	 	printf("************************************************\n");
	 	
	 	printf("\n \t\t  AN PHIM CHON: ");
	 	scanf("%d",& key);
	 


switch(key)
 {
 	case 1:
 		do{
 			printf("\n Nhap so luong sinh vien: "); scanf("%d",&n);
 			Nhapsv(SINHVIEN );
 		}while(n<=0);
 		
 		//goi ham de thuc hien cong viec
 		printf("\n Bam phim bat ky de tiep tuc!");
 		getch();
 		break;
 	case 2:
 		//goi ham de thuc hien cong viec
 		printf("\n Bam phim bat ky de tiep tuc!");
 		getch();
 		break;
 	case 3:
 		printf("\n Bam phim bat ky de tiep tuc!");
 		//goi ham de thuc hien cong viec
 		getch();
 		break;
 	case 4:
 		printf("\n Bam phim bat ky de tiep tuc!");
 		//goi ham de thuc hie cong viec
 		break;
 	case 5:
 		printf("\n Bam phim bat ky de tiep tuc!");
 		//goi ham de thuc hien cong viec
 		getch();
 		break;
 	case 0:
 		exit(1);
 	default:
 		printf("\n Khong co chuc nang nay!");
 		printf("\n Bam phim bat ky de tiep tuc!");
 		getch();
 		break;
 }
}
}

void Nhapsv(SINHVIEN &x)
{
	fflush(stdin);
	printf("\n Nhap Ma SV:");
	gets(x.Masv);
	
	//scanf("%d",&x.Masv);
	  fflush(stdin);
	printf("\n Nhap ho ten:");
	gets(x.Hotensv);
	  fflush(stdin);
	printf("\n Nhap phai:");
	gets(x.Phai);
	  fflush(stdin);
	printf("\n Nhap nganh hoc:");
	gets(x.Nganhhoc);
	  fflush(stdin);
	printf("\n Nhap Que quan:");
	gets(x.Quequan);


do
{
	printf("\n Nhap nam sinh:");
	scanf("%d",&x.Namsinh);
	
}while(x.Namsinh<1980 || x.Namsinh>2010);

do
{
	printf("\n Nhap ket qua cuoi khoa:");
	scanf("%f",&x.Kqcuoikhoa);
	
}while(x.Kqcuoikhoa<0 || x.Kqcuoikhoa>4);

fflush(stdin);
 if(x.Kqcuoikhoa<=1.5)
  {
  	strcpy(x.Xeploai,"Yeu");
  }
  else
   if(x.Kqcuoikhoa<=2.5)
    {
    	strcpy(x.Xeploai,"Trung binh");
    }
    else
      if(x.Kqcuoikhoa<=3.0)
      {
       	strcpy(x.Xeploai,"Kha");
       }
         else
          if(x.Kqcuoikhoa<=3.8)
          {
         	strcpy(x.Xeploai,"Gioi");
          }
             else 
              {
              	strcpy(x.Xeploai,"Xuatsac");
              }
        }
