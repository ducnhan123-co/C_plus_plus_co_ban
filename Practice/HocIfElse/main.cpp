#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cout<<"Moi you nhap  1 so:";
	cin>>a;
	if(a>=0)
	{
		cout<<a<<" la so duong\n";
	}
	else
	{
		cout<<a<<" la so am\n";
		cout<<"Ban nhap so Am\n";		
	}
	return 0;
}
