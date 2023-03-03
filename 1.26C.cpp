#include<stdio.h>
struct MatHang
{
	char MatHang[20];
	int DonGia;
	int SoLuongTon;
};
typedef struct MatHang MATHANG;

void NhapMatHang(MATHANG &mh)
{
	fflush(stdin);
	printf("Nhap mat hang: \n");
	gets(mh.MatHang);

	printf("Nhap don gia: \n");
	scanf("%d",&mh.DonGia);

	printf("Nhap so luong ton: \n");
	scanf("%d",&mh.SoLuongTon);
}

void XuatMatHang(MATHANG mh)
{
	printf("Mat hang: %s\n",mh.MatHang);
	printf("Don gia: %d\n",mh.DonGia);
	printf("So luong ton: %d\n",mh.SoLuongTon);
}

int main()
{
	MATHANG m1;
	NhapMatHang(m1);
	XuatMatHang(m1);
	return 0;
}