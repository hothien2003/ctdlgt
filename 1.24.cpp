#include <iostream>
using namespace std;

typedef struct HopSua
{
	char NhanHieu[20];
	float TrongLuong;
	int HanSuDung;
}HOPSUA;

void NhapHopSua(HOPSUA &hs)
{
	cout<<"Nhap nhan hieu: ";gets(hs.NhanHieu);
	cout<<"Nhap trong luong: ";cin>>hs.TrongLuong;
	cout<<"Nhap han su dung: ";cin>>hs.HanSuDung;
}

void XuatHopSua(HOPSUA hs)
{
	cout<<"Nhan hieu: "<<hs.NhanHieu<<endl;
	cout<<"Trong luong: "<<hs.TrongLuong<<endl;
	cout<<"Han su dung: "<<hs.HanSuDung<<endl;
}

int main()
{
	HOPSUA h1;
	NhapHopSua(h1);
	XuatHopSua(h1);
	return 0;
}