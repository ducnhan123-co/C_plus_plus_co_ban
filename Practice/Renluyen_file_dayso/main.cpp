#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void LuuFile(int number);
int main(int argc, char** argv) {
	while(true)
	{
		int number;
		cout<<"Nhap so:";
		cin>>number;
		LuuFile(number);
		char h;
		cout<<"Nhap tiep khong?(c/k):";
		cin>>h;
		if(h=='k')
			break;
	}
	cout<<"Ban da nhap xong!";
	FILE *file=fopen("csdl.txt","r");
	int MChan[1000],iChan=0;
	while(true)
	{
		char *line="\0";
		char buffer[5];
		line=fgets(buffer,5,file);
		if(line!=NULL)
		{
			int number=atoi(line);
			if(number%2==0)
			{
				MChan[iChan++]=number;
			}
			//cout<<number<<endl;
		}
		else
		{
			break;
		}
	}
	fclose(file);
	cout<<"\nCac so chan:";
	for(int i=0;i<iChan;i++)
	{
		cout<<MChan[i]<<"\t";
	}
	return 0;
}
void LuuFile(int number)
{
	FILE *file=fopen("csdl.txt","a");
	char str[5];
	itoa(number,str,10);//10->thap phan, 16 -> hexa, 8->octal, 2->binary
	fputs(str,file);
	fputs("\n",file);
	fclose(file);
}
