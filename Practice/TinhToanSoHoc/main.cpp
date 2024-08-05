#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	char ch;
	cout<<"Chuong trinh tinh toan so hoc\n";
	cout<<"Nhap so a:";
	cin>>a;
	cout<<"Nhap so b:";
	cin>>b;
	cout<<"nhap phep toan(+,-,*,/):";
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<(a+b);
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<(a-b);
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<(a*b);
			break;
		case '/':
			if(b==0)
			{
				cout<<"Mau so phai Khac 0";				
			}
			else
				cout<<a<<"/"<<b<<"="<<(a*1.0/b);
			break;
		default:
			cout<<"Thim Nhap phep toan LUI ui";			
	}
	return 0;
}
