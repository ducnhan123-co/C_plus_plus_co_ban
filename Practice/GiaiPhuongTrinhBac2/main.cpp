#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c;
	cout<<"Phuong trinh bac 2: ax^2+bx+c=0\n";
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
	cin>>c;
	if(a==0)
	{
		//bx+c=0
		if(b==0 && c==0)
		{
			cout<<"PT Vo So No";	
		}	
		else if(b==0 &&c !=0)
		{
			cout<<"PT Vo No";
		}
		else
		{
			//bx=-c==>x=-c/b
			double x=-c/b;
			cout<<"pT co 1 no x="<<x<<endl;
		}
	}
	else
	{
		double delta=pow(b,2)-4*a*c;
		if(delta<0)
		{
			cout<<"PT vo No!";
		}	
		else if(delta==0)
		{
			double nkep=-b/(2*a);
			cout<<"PT co No Kep, x1=x2="<<nkep;
		}
		else
		{
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"PT co 2 No phan biet\n";
			cout<<"x1="<<x1<<"\n";
			cout<<"x2="<<x2<<"\n";
		}
	}
	return 0;
}
