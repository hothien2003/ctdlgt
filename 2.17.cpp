#include<stdio.h>

long Tong(int n)
{
	if(n==0)
		return 0;
	return Tong(n-1)*(n-1)+n*n;
}

int main()
{
	int n,S;
	printf("\nNhap n=");
	scanf("%d",&n);

	S = Tong(n);
	printf("S=%d",S);
	return 0;
}
