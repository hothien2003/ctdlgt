#include<stdio.h>
 struct HopSua
 {
 	char NhanHieu[20];
 	float TrongLuong;
 	int HanSuDung;
 };
 typedef struct HopSua HOPSUA;

 void NhapHopSua(HOPSUA &hs)
 {
 	fflush(stdin);
 	printf("Nhap nhan hieu: \n");
 	gets(hs.NhanHieu);

 	printf("Nhap trong luong: \n");
 	scanf("%f",&hs.TrongLuong);

 	printf("Nhap han su dung: \n");
 	scanf("%d",&hs.HanSuDung);
 }

 void XuatHopSua(HOPSUA hs)
 {
 	printf("Nhan hieu: %s\n",hs.NhanHieu);
 	printf("Trong luong: %f(kg)\n",hs.TrongLuong);
 	printf("Han su dung: %d\n",hs.HanSuDung);
 }

 int main()
 {
 	HOPSUA h1;
 	NhapHopSua(h1);
 	XuatHopSua(h1);
 	return 0;
 }