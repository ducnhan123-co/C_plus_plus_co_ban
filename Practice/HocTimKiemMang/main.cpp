#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu trong Mang:";
	cin>>n;
	int M[n];
	cout<<"Moi ban nhap cac gia tri cho phan tu:\n";
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
	cout<<"Mang sau khi ban nhap:\n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	int k;
	cout<<"Nhap K muon tim:";
	cin>>k;
	bool kq=false;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
		{
			kq=true;
			//break;
			dem++;
		}
	}
	if(kq==true)
	{
		cout<<"thay "<<k<<"xuat hien "<<dem<<" lan "<<" trong mang";
	}
	else
	{
		cout<<"Khong thay "<<k<<" trong mang";
	}
	return 0;
}
