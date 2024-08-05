#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[]={4,5,6,24,0,12};
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	int *p=a;
	for(int i=0;i<6;i++)
	{
		cout<<*(p+i)<<"\t";
	}
	*(p+3)=113;	
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<p[i]<<"\t";
	}
	return 0;
}
