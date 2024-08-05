#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	int M[n];
	for(int i=0;i<n;i++)
	{
		M[i]=rand()%100;
	}
	cout<<"Du lieu toan bo mang:\n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	int sole=0;
	cout<<"\nCac so le cua mang:\n";
	for(int i=0;i<n;i++)
	{
		if(M[i]%2!=0)
		{
			cout<<M[i]<<"\t";
			sole+=1;
		}
	}
	cout<<"==>Co "<<sole<<" so le trong mang";
	int sochan=0;
	cout<<"\nCac so chan cua mang:\n";
	for(int i=0;i<n;i++)
	{
		if(M[i]%2==0)
		{
			cout<<M[i]<<"\t";
			sochan+=1;
		}
	}
	cout<<"==>Co "<<sochan<<" so chan trong mang";
	cout<<"\nCac so nguyen to trong mang:\n";
	for(int i=0;i<n;i++)
	{
		int dem=0;
		for(int j=1;j<=M[i];j++)
		{
			if(M[i]%j==0)
				dem++;
		}
		if(dem==2)
		{
			cout<<M[i]<<"\t";
		}
	}
	return 0;
}
