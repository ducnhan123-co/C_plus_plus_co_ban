#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum=0;
	int n;
	cout<<"Nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(sum>=9)
			break;
		sum=sum+i;
	}
	cout<<"sum="<<sum;
	return 0;
}
