#include <stdio.h>
#include <stdlib.h>
int nhap2c1(int *a,int n,int m);
int nhap2c2(int *a,int n,int m);
void *calloc (size_t nitems, size_t size);
int xuat2c2(int *a, int n, int m);
int main()
{
	int *a,n,m;
    a=(int *)calloc(100,sizeof(int));
    printf("\n Nhap n:");
    scanf("%d",&n);
    printf("\n Nhap m:");
    scanf("%d",&m);
    
    nhap2c2(a,n,m);
    xuat2c2(a,n,m);
}

int nhap2c1(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\n Nhap phan tu thu %d:",i);
			scanf("%d",(a+i*n+j));
		}
	}
}

int nhap2c2(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap phan tu thu a[%d]:",i);
		scanf("%d",(a+i));
	}
}

int xuat2c2(int *a, int n, int m)
{
	for(int i=0;i<n;i++)
	{
		printf("  %d   ",a[i]);
	}
}

int timmax(int *a, int n, int m)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		
	}
}
