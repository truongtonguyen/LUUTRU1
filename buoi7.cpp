#include <stdio.h>
#include <stdlib.h>

void nhapmatran(int *a, int n, int m, char c);

void xuatmatran(int *a, int n, int m, char c);
int timmax(int *a, int n, int m);
int tinhtich(int *a, int n, int m);
int main()
{
	int m,n;
	printf("\n Nhap so phan tu:");
	scanf("%d",&n);
	
	int *a,*b;
	a=(int *) malloc(sizeof(int)*(n*m+1));
	b=(int *) malloc(sizeof(int)*(n*m));
	
	nhapmatran(a,n,m,'A');
	printf("\n Ma tran A:\n"); 
	
	nhapmatran(a,n,m,'B');
    printf("\n Ma tran B:\n");
    xuatmatran(a,n,m,'A');
    xuatmatran(a,n,m,'B');
    
    timmax(a,n,m);
	tinhtich(a,n,m);
	
	printf("\n Cac phan tu giao nhau la:\n");
	giaoChan(a,b,n,m);
	
	quickSort(a,0,n*m-1);
	printf("\n Mang sau khi sap xep la:\n");
	xuatmang(a,n*m+1);
	
	int k;
	printf("\n Nhap k:");
	scantf("%d",&k);
	chenK(a,n*m,k);
	printf("\n Mang sau khi chen k la:\n");
	xuatmang(a,n*m+1);
	
return 0;
}

void nhapmatran(int *a, int n, int m, char c)
{
	for(int i=0;i<=n;i++)
	 { 	  
	 	  	printf("\n Nhap a[%d]:",i);
	 	  	scanf("%d",&a[i]);	 	  
	 }
}

void xuatmatran(int *a, int n, int m, char c)
{
		for(int i=0;i<=n;i++)
	 {
	 	printf("   %d    ",a[i]);	 	  
	 	printf(" \n \n ");
	 }
}

int timmax(int *a, int n, int m)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		a[i]==max;
	}
    printf("\n Phan tu lon nhat la:%d",a[max]);
}

int tinhtich(int *a, int n, int m)
{
	int tich=1;
	for(int i=1;i<n;i++)
	{
		tich=tich*a[i];
	}
	printf("\n Tich cac phan tu la:%d",tich);
}

int ktraNT(int *a, int n, int m)
{
    int dem=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==1)
	   return 1;
	else 
	return 0;
}

int demSNT(int *a, int n, int m)
{
	int demNT=0;
	for(int j=0;j<n;j++)
	{
    	if(ktraNT(j)==1)
	    demNT++;
    }
}
