#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Xem Diem Trung Binh\n";
	cout<<"Moi ban nhap Diem TB:";
	double dtb;
	cin>>dtb;
	if(dtb<0 || dtb>10)
	{
		cout<<"Diem ban nhap Khong hop le";
	}
	else
	{
		if(dtb>=5)
		{
			cout<<"Ban Dau!";
		}
		else
		{
			cout<<"Ban ROT!";
		}
	}
	return 0;
}
