#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Tong2So(int a,int b);
void XuatDulieu(int x);
void Output();//prototype
int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	int kq=Tong2So(a,b);
	cout<<"Tong "<<a<<"+"<<b<<"="<<kq;
	int kq2=Tong2So(113,114);
	cout<<"\nkq2="<<kq2<<endl;
	int kq3=Tong2So(1,5);
	XuatDulieu(kq3);
	cout<<"\nHam goi ham:\n";
	Output();
	return 0;
}

int Tong2So(int a,int b)
{
	return a+b;
}
void XuatDulieu(int x)
{
	cout<<x<<endl;
}
void Output()
{
	int kq=Tong2So(9,10);
	XuatDulieu(kq);
}
