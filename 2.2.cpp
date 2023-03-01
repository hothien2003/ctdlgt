#include<stdio.h>
#include<conio.h>

long Tich(int n)
{
	if(n==0)
		return 1;
	return Tich (n-1)*n;
}

int main()
{
	int n,T;
	printf("\nNhap n=");
	scanf("%d",&n);

	T=Tich(n);
	printf("T=%d",T);

	getch();
	return 0;
}