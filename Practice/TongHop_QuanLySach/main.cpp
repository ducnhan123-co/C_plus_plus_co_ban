#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Book
{
	char ISBN[20];
	char Ten[150];
	int Trang;
	char TacGia[150];	
};
void NhapSach(Book &b)
{
	cout<<"Nhap ISBN:";
	gets(b.ISBN);
	cout<<"Nhap Ten:";
	gets(b.Ten);
	cout<<"Nhap Trang:";
	cin>>b.Trang;
	cin.ignore();
	cout<<"Nhap tac gia:";
	gets(b.TacGia);
}
void NhapDanhSach(Book dsSach[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap sach thu "<<i<<":\n";
		NhapSach(dsSach[i]);
	}
}
void XuatSach(Book b)
{
	cout<<b.ISBN<<"\t"<<b.Ten<<"\t"<<b.TacGia<<"\t"<<b.Trang<<endl;
}
void XuatDanhSach(Book dsSach[],int n)
{
	for(int i=0;i<n;i++)
	{
		XuatSach(dsSach[i]);	
	}
}
void LuuFile(Book dsSach[],int n)
{
	ofstream outfile("csdlbook.txt",ofstream::binary);
	for(int i=0;i<n;i++)
	{
		Book b=dsSach[i];
		outfile.write((char *)&b,sizeof(Book));
	}
	outfile.close();
}
void DocFile(Book dsSach[],int &n)
{
	ifstream infile("csdlbook.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(Book);
	for(int i=0;i<n;i++)
	{
		Book b;
		infile.read((char*)&b,sizeof(Book));
		dsSach[i]=b;
	}
	infile.close();
}
void TimSach(Book dsSach[],int n,char *tg)
{
	for(int i=0;i<n;i++)
	{
		Book b=dsSach[i];
		int kq=strcmp(b.TacGia,tg);
		if(kq==0)
		{
			XuatSach(b);
		}
	}
}
void SapXep(Book dsSach[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			Book b1=dsSach[i];
			Book b2=dsSach[j];
			if(b1.Trang<b2.Trang)
			{
				dsSach[i]=b2;
				dsSach[j]=b1;
			}
		}
	}
}
void XuatTop3(Book dsSach[],int n)
{
	int m=n<3?n:3;
	for(int i=0;i<m;i++)
	{
		XuatSach(dsSach[i]);
	}
}

int main(int argc, char** argv) {
	/*Book dsSach[5];
	NhapDanhSach(dsSach,5);
	cout<<"Sach sau khi nhap:\n";
	XuatDanhSach(dsSach,5);
	LuuFile(dsSach,5);*/
	
	int max=1000;
	Book dsSach[max];
	int n;
	DocFile(dsSach,n);
	XuatDanhSach(dsSach,n);
	cout<<"Nhap tac gia:";
	char tg[150];
	gets(tg);
	TimSach(dsSach,n,tg);
	SapXep(dsSach,n);
	cout<<"\nSau khi sort:\n";
	XuatDanhSach(dsSach,n);
	cout<<"\n------------------------\n";
	cout<<"Top3:\n";
	XuatTop3(dsSach,n);
	return 0;
}
