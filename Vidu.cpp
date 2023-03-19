#include <iostream>
#include<time.h>
using namespace std;
void Songuyenrandom(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=rand() % 10 +1;
	}
}
void SoNguyenrandom(int a[],int n)
{	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
void Sapxep(int a[], int n)
{
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (a[i] > a[j])
			{
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
int Search(int a[],int k,int n){
	int left=0;int right=n-1;

	while (left<=right){
		int mid = (left+right)/2;

		if (a[mid]==k)
			return mid;
		else if(a[mid]<k)
			left = mid +1;
		else
			right = mid -1;
	}
	return -1;
}

int main()
{
	int a[500],n, k, S;
	cout<<"Nhap n= "; cin>>n;
	Songuyenrandom(a,n);
	Sapxep(a, n);
	SoNguyenrandom(a, n);
	cout << "Nhap k = "; cin >> k;
	S = Search(a, k, n);
	cout << S << endl;
}