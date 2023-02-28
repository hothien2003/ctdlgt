#include <stdio.h>
#include <conio.h>
 struct HonSo
 {
 	int PhanSo,PhanNguyen;
 }
 typedef struct HonSo HONSO;

 void NhapHonSo(HONSO &);
 void XuatHonSo(HONSO);

 void NhapHonSo(HONSO &hs)
 {
 	struct PhanSo
 	{
 		int TuSo,MauSo;
 	}
 	typedef struct PhanSo PHANSO;

 	void NhapPhanSo(PHANSO &ps)
 	{
 	printf("\nNhap vao tu so: ");
 	scanf("%d", &ps.TuSo);

 	do{
 		printf("\nNhap vao mau so: ");
 		scanf("%d", &ps.MauSo);
 	if(ps.MauSo == 0){
 		printf("\nMau so phai khac 0.Xin kiem tra lai !");
 	}
 		}while(ps.MauSo == 0);
 	
 	printf("\nNhap vao phan nguyen: ");
 	scanf("%d", &hs.PhanNguyen);
 	}
 }
 void XuatHonSo(HONSO hs)
 {
 	printf("%d*%d/%d",hs.PhanSo,hs.PhanNguyen );
 }

int main()
{
	HONSO hs;
	NhapHonSo(hs);
	XuatHonSo(hs);

	getch();
	return 0;
}



