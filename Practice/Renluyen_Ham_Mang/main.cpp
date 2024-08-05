#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
int TimK(int M[],int n,int k);
void SapXepTangDan(int M[],int n);
int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	int M[n];
	NhapMang(M,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(M,n);
	int k;
	cout<<"\nNhap K de tim:";
	cin>>k;
	int kqTim=TimK(M,n,k);
	if(kqTim==-1)
		cout<<"Khong thay "<<k<<" Trong mang\n";
	else
		cout<<"Thay "<<k<<" tai vi tri thu "<<kqTim;
	SapXepTangDan(M,n);
	cout<<"\nMang sau khi SORT\n";
	XuatMang(M,n);
	return 0;
}
void NhapMang(int M[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}
void XuatMang(int M[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
}
int TimK(int M[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
			return i;
	}
	return -1;
}
void SapXepTangDan(int M[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(M[i]>M[j])
			{
				int tam=M[i];
				M[i]=M[j];
				M[j]=tam;
			}
		}
	}
}
