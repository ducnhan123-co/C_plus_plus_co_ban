#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n,sum;
	cout<<"Nhap n:";
	cin>>n;
	sum=0;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum="<<sum;
	return 0;
}
