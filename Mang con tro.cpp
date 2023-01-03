#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void nhapmang(int *a, int n);
void xuatmang(int *a, int n);
void sapxep(int *a, int n);
int  ktra(int x);
void tongsnt(int *a, int n);

int main()
{
	int key;
	int *a,m,n;
while(true)
{	
    system("cls");
	printf("************************************\n");
	printf("**       LAM VIEC VOI MANG        **\n");
	printf("**    1. Nhap, xuat mang          **\n");
	printf("**    2. Sap xep tang             **\n");
	printf("**    3. Tinh tong                **\n");
	printf("**    0. Thoat                    **\n");
	printf("************************************\n");
	printf("\n Nhap so dong va so cot n:");
	scanf("%d",&n);
	printf("\n\n An phim de chon:");
	scanf("%d",&key);

switch(key)
{
	case 1:
		nhapmang(a,n);
		xuatmang(a,n);
		printf("\n An phim bat ky de tiep tuc:");
	    getch();
	    break;
	case 2:
		sapxep(a,n);
		printf("\n An phim bat ky de tiep tuc:");
		getch();
		break;
	case 3:
		tongsnt(a,n);
		printf("\n An phim bat ky de tiep tuc:");
		getch();
		break;
	case 0:
		exit(1);
	default:
		printf("\n Khong co chuc nang nay");
		printf("\n An phim bat ky de tiep tuc:");
		getch();
		break;
}
}
}

void nhapmang(int *a, int n)
{
	a = (int*)calloc(n, sizeof(int));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n Phan tu cua mang la: a[%d][%d] ",i,j);
			scanf("%d", a+i*n+j);
		}
	}
}

void xuatmang(int *a, int n)
{
	a = (int*)calloc(n, sizeof(int));//void *calloc(so phan tu, kich co phan tu); thiet lap ve 0
	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n Cac phan tu cua mang da nhap la: %d ", *(a+i*n+j));
		}
	}
}

void swap(int *x, int *y )
{
	 int tam;
	 tam=*x;
	 *x=*y;
	 *y=tam;
}

void sapxep(int *a, int n)
{
     for (int i=0;i<n;i++)
     {
     	  for (int j=0;j<n;j++)
     	  {
     	  	  for (int k=j+1;k<n;k++)
     	  	  {
     	  	  	  if ( *(a+j*n+i)>=*(a+k*n+i))
     	  	  	  {
     	  	  	  	 swap (a+j*n+i, a+k*n+i);
     	  	  	  }
     	  	  }
     	  }
     }
     for (int i=0;i<n;i++)
     {
     	  for (int j=0;j<n;j++)
     	  {
     	  	  for (int k=j+1;k<n;k++)
     	  	  {
     	  	  	  if ( *(a+i*n+j)>=*(a+i*n+k))
     	  	  	  {
     	  	  	  	 swap (a+i*n+j, a+i*n+k);
     	  	      }
     	  	  }
     	  }
     }
     printf("\n Mang sau khi sap xep:");
     for (int i=0;i<n;i++)
     {
     	 for (int j=0;j<n;j++)
     	 {
     	 	 printf(" %d ",*(a+i*n+j));
     	 }
      	 printf("\n\n");
     }
}

int ktra(int x)
{
	int demnt=1;
	if (x<2)
	{
		demnt=0;
	}
	else
	{
		for (int i=2;i<x;i++)
		{
			if (x%i==0 && x!=2) 
			{
		   	   demnt=0;
		  	   break;	
			}
		}
	}
	return demnt;
}


void tongsnt(int *a, int n)
{
	 printf("\n Cac phan tu la so nguyen to trong ma tran:");
	 int dem=0, tong=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (ktra(*(a+i*n+j))==1 & ktra(*(a+i*n+j))%3==0)
	 	 	 {
	 	 	 	printf(" %d ",*(a+i*n+j));
	 	 	 	dem++;
	 	 	 	tong=tong+*(a+i*n+j);
	 	 	 }
	 	 }
	 }
	 printf("\n Co %d phan tu thoa dieu kien trong ma tran va tong cua chung bang %d",dem,tong);
}
