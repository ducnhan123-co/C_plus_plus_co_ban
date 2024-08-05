#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien
{
	int ma;
	char ten[255];
	double dtb;
};
SinhVien * NhapSinhVien()
{
	SinhVien *nv=new SinhVien;
	cout<<"Nhap ma:";
	cin>>nv->ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(nv->ten);
	cout<<"Nhap diem:";
	cin>>nv->dtb;
	return nv;
}
void NhapDanhSachSinhVien(SinhVien **&dsSV,int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<"Nhap Sinh vien thu "<<i<<":\n";
		SinhVien *sv=NhapSinhVien();
		*(dsSV+i)=sv;
	}
}
void XuatSinhVien(SinhVien *nv)
{
	cout<<nv->ma<<"-"<<nv->ten<<"-"<<nv->dtb<<endl;
}
void XuatDanhSachSinhVien(SinhVien **dsSV,int siso)
{
	for(int i=0;i<siso;i++)
	{
		SinhVien *sv=*(dsSV+i);
		XuatSinhVien(sv);
	}
}
void LuuFile(SinhVien **dsSV,int siso)
{
	ofstream outfile("csdlsv.txt",ofstream::binary);
	for(int i=0;i<siso;i++)
	{
		SinhVien *sv=*(dsSV+i);
		outfile.write((char*)sv,sizeof(SinhVien));
	}
	outfile.close();
}
void DocFile(SinhVien **&dsSV,int &siso)
{
	ifstream infile("csdlsv.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	siso=size/sizeof(SinhVien);
	dsSV=new SinhVien*[siso];
	for(int i=0;i<siso;i++)
	{
		SinhVien *sv=new SinhVien;
		infile.read((char *)sv,sizeof(SinhVien));
		*(dsSV+i)=sv;
	}
	infile.close();
}
int main(int argc, char** argv) {
	/*int siso=3;
	SinhVien **dsSV=new SinhVien*[siso];
	NhapDanhSachSinhVien(dsSV,siso);
	cout<<"Danh sach Sinh Vien sau khi nhap:\n";
	XuatDanhSachSinhVien(dsSV,siso);
	LuuFile(dsSV,siso);*/
	
	int siso;
	SinhVien **dsSV=NULL;
	DocFile(dsSV,siso);
	XuatDanhSachSinhVien(dsSV,siso);
	return 0;
}
