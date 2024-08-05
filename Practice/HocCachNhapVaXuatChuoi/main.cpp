#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25];
	cout<<"Moi ban nhap chuoi:";
	gets(str1);
	cout<<"Chuoi sau khi ban nhap:\n";
	puts(str1);
	
	char *str2=new char[25];
	cout<<"Moi ban nhap chuoi:";
	gets(str2);
	cout<<"Chuoi sau khi ban nhap:\n";
	puts(str2);
	
	char str3[255];
	cout<<"Moi thim nhap 1 chuoi:";
	cin.getline(str3,255);
	cout<<"Chuoi sau khi ban nhap:\n";
	cout<<str3<<endl;
	cout<<"Kich thuoc thuc su ban nhap:"<<strlen(str3)<<endl;
	return 0;
}
