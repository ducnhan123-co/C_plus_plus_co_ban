#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
#define MAX 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SanPham
{
	int ma;
	char ten[255];
	int gia;
};
void NhapSanPham(SanPham &sp);
void NhapDanhSachSanPham(SanPham dsSP[],int n);
void XuatSanPham(SanPham sp);
void XuatDanhSachSanPham(SanPham dsSP[],int n);
void LuuFile(SanPham dsSP[],int n);
void DocFile(SanPham dsSP[],int &n);
int main(int argc, char** argv) {
	/*SanPham dsSP[MAX];
	NhapDanhSachSanPham(dsSP,MAX);
	cout<<"Danh sach San Pham Sau khi nhap:\n";
	XuatDanhSachSanPham(dsSP,MAX);
	LuuFile(dsSP,MAX);*/
	SanPham dsSP[MAX];
	int n;
	DocFile(dsSP,n);
	cout<<"so luong="<<n<<endl;
	//XuatDanhSachSanPham(dsSP,n-1);
	return 0;
}
void NhapSanPham(SanPham &sp)
{
	cout<<"Ma:";
	cin>>sp.ma;
	cin.ignore();
	cout<<"Ten:";
	gets(sp.ten);
	cout<<"Gia:";
	cin>>sp.gia;
}
void NhapDanhSachSanPham(SanPham dsSP[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap San pham thu "<<i<<":\n";
		NhapSanPham(dsSP[i]);
	}
}
void XuatSanPham(SanPham sp)
{
	cout<<sp.ma<<"-"<<sp.ten<<"-"<<sp.gia<<endl;
}
void XuatDanhSachSanPham(SanPham dsSP[],int n)
{
	for(int i=0;i<n;i++)
	{
		XuatSanPham(dsSP[i]);
	}
}
void LuuFile(SanPham dsSP[],int n)
{
	ofstream outfile("csdlsp.dat",ofstream::binary);
	for(int i=0;i<n;i++)
	{
		SanPham sp=dsSP[i];
		outfile.write((char*)&sp,sizeof(SanPham));
	}
	outfile.close();
}
void DocFile(SanPham dsSP[],int &n)
{
	ifstream infile("csdlsp.dat",ifstream::binary);
	int i=0;
	while(infile.eof()==false)
	{
		SanPham sp;
		infile.read((char*)&sp,sizeof(SanPham));
		dsSP[i++]=sp;
	}
	infile.close();
	n=i;
	//facebook.com/duythanhcse
}
