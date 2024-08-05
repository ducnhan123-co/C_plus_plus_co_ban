#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TINH CHU VI -DIEN TICH TAM GIAC"<<endl;
	double r;
	const double PI=3.14;
	double chuvi,dientich;
	cout<<"Moi Thim nhap Ban Kinh:";
	cin>>r;
	chuvi=2*PI*r;
	dientich=PI*r*r;
	cout<<"Chu Vi="<<chuvi<<"\n";
	cout<<"Dien Tich="<<dientich<<endl;
	return 0;
}
