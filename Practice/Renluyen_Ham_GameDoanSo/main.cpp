#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void play();
void loopPlay();
int main(int argc, char** argv) {
	srand(time(NULL));
	//play();
	loopPlay();
	return 0;
}
void play()
{
	int somay=1+rand()%100;
	int solandoan=0;
	int songuoi;
	do
	{
		cout<<"May doan 1 so [1..100], so cua ban:";
		cin>>songuoi;
		solandoan++;
		cout<<"ban doan lan thu "<<solandoan<<endl;
		if(songuoi==somay)
		{
			cout<<"Ban da WIN!, so may="<<somay<<endl;
			break;
		}
		if(songuoi<somay)
		{
			cout<<"So ban doan < so cua may"<<endl;
		}
		else 
		{
			cout<<"So ban doan > so cua may"<<endl;
		}
		if(solandoan==7)
		{
			cout<<"GAME OVER! so cua may="<<somay<<endl;
			break;
		}
	}while(true);
}
void loopPlay()
{
	while(true)
	{
		play();
		cout<<"Tiep khong?(c/k):";
		char c;
		cin>>c;
		if(c=='k')
			break;
	}
	cout<<"Cam on ban da choi game!";
}
