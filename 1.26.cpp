#include <iostream>
using namespace std;

typedef struct MatHang
{
	char MatHang[20];
	int DonGia;
	int SoLuongTon;
}MATHANG;

void NhapMatHang(MATHANG &mh)
{
	cout <<"Nhap mat hang: "; gets(mh.MatHang);
	cout <<"Nhap don gia: ";cin>>mh.DonGia;
	cout <<"Nhap so luong ton: ";cin>>mh.SoLuongTon;
}

void XuatMatHang(MATHANG mh)
{
	cout <<"Mat hang: "<<mh.MatHang<<endl;
	cout <<"Don gia: "<<mh.DonGia<<endl;
	cout <<"So luong ton: "<<mh.SoLuongTon<<endl;
}

int main()
{
	MATHANG m1;
	NhapMatHang(m1);
	XuatMatHang(m1);
	return 0;
}
