//konversi jam menit dan detik ke total detik
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int j,m,d,td;
	system ("color A");
	cout<<" Nama   : Ibnu Almugni Akbarudin"<<endl;
	cout<<" NPM    : 20.14.1.0042 "<<endl;
	cout<<" Kelas  : 1 A "<<endl;
	cout<<" Prodi  : Informatika"<<endl;
	cout<<" Tugas  : mengkonversi waktu"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Masukan Jam : ";
	cin>>j;
	cout<<"Masukan Menit : ";
	cin>>m;
	cout<<"Masukan Detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<" Total Detik : "<<td;
	return 0;
}

