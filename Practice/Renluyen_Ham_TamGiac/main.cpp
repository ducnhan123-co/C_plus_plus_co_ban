#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ChuVi(int a,int b,int c);
double  DienTich(int a,int b,int c);
bool KiemTra(int a,int b,int c);
int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Moi ban nhap canh a:";
	cin>>a;
	cout<<"Moi ban nhap canh b:";
	cin>>b;
	cout<<"Moi ban nhap canh c:";
	cin>>c;
	if(KiemTra(a,b,c)==false)
	{
		cout<<"Tam giac khong hop le\n";
		return -1;
	}
	int cv=ChuVi(a,b,c);
	double dt=DienTich(a,b,c);
	cout<<"Chu vi="<<cv<<endl;
	cout<<"Dien tich="<<dt<<endl;
	return 0;
}
int ChuVi(int a,int b,int c)
{
	return a+b+c;	
}
double  DienTich(int a,int b,int c)
{
	double p=ChuVi(a,b,c)/2.0;
	double dt=sqrt(p*(p-a)*(p-b)*(p-c));
	return dt;
}
bool KiemTra(int a,int b,int c)
{
	if(a<=0 || b<=0 || c<=0 || (a+b)<=c || (a+c)<=b ||(b+c)<=a)
		return false;
	return true;
}
