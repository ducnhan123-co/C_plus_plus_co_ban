#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int canhdoidien;
	int chieucao;
	int chuvi;
	double dientich;
	cout<<"CHUONG TRINH TINH CHU VI-DIEN TICH TAM GIAC\n";
	cout<<"Moi ban nhap chieu dai canh doi dien:";
	cin>>canhdoidien;
	cout<<"Moi ban nhap chieu cao:";
	cin>>chieucao;
	dientich=1.0/2*chieucao*canhdoidien;
	cout<<"Dien Tich="<<dientich<<endl;
	
	return 0;
}
