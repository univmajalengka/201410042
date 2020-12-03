  
//Konversi total detik ke Jam, Menit dan Detik
#include<iostream>
using namespace std;
int main()
{
	int td,j,m,d,sm;
	system ("color A");
	cout<<" Nama   : Ibnu Almugni Akbarudin"<<endl;
	cout<<" NPM    : 20.14.1.0042 "<<endl;
	cout<<" Kelas  : 1 A "<<endl;
	cout<<" Prodi  : Informatika"<<endl;
	cout<<" Tugas  : mengkonversi waktu"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Masukan total detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d;
	return 0;
}
