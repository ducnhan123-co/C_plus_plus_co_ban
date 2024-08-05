#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct NhanVien
{
	int ma;
	char ten[50];	
};
void Xuat(NhanVien arr[],int n);
void luuFile()
{
	NhanVien dsNV[4];
	dsNV[0].ma=1;
	strcpy(dsNV[0].ten,"teo");
	dsNV[1].ma=2;
	strcpy(dsNV[1].ten,"ty");
	dsNV[2].ma=3;
	strcpy(dsNV[2].ten,"bin");
	dsNV[3].ma=3333;
	strcpy(dsNV[3].ten,"BO");
	
	ofstream outfile ("csdl.txt",ofstream::binary);
	outfile.write((char*)dsNV,sizeof(dsNV));
	outfile.close();
	Xuat(dsNV,4);
}
void Xuat(NhanVien arr[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<arr[i].ma<<"\t"<<arr[i].ten<<"\n";
	}
}
void DocFile()
{
	ifstream infile ("csdl.txt",ifstream::binary);
	infile.seekg (0,infile.end);
	long size = infile.tellg();
	infile.seekg (0);   
	
    int real=size/sizeof(NhanVien);    
    NhanVien dsNV[real];   
    infile.read ((char *)dsNV,sizeof(dsNV));   
    infile.close();
    Xuat(dsNV,real);
}
int main(int argc, char** argv) {
	//DocFile();
	luuFile();
	return 0;
}
