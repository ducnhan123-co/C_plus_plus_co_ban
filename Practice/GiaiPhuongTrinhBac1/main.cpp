#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	cout<<"Giai Phuong Trinh Bac 1:ax+b=0\n";
	cout<<"Nhap he so a:";
	cin>>a;
	cout<<"Nhap he so b:";
	cin>>b;
	if(a==0 && b==0)
	{
		cout<<"Phuong trinh vo so nghiem";
	}
	else if(a==0 &&b!=0)
	{
		cout<<"Phuong trinh vo nghiem";
	}
	else
	{
		//ax=-b==>x=-b/a
		double x=-b*1.0/a;
		cout<<"PT co 1 No, x="<<x;
	}
	return 0;
}
