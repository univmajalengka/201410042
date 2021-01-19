#include<iostream>
#include <windows.h>
using namespace std;
//deklarasi function bisa menerima inputan 2 parameter
int total_jam();
int total_detik();

//deklarasi prosedure bisa menerima inputan 1 parameter
void tampil(){
	cout<<"==========================================="<<endl;
}
int main()
{
	tampil();
	//tampil
	cout <<"Nama  : Ibnu Almugni Akbarudin" << endl;
	cout <<"NPM   : 20.14.1.0042"<< endl;
	cout <<"Tugas : 7 " << endl;
	cout <<"Kelas : 1A " << endl;
}
//deklarasi function jam, menit, detik ke total jam
int total_jam(){
	int td,j,m,d,sm;
	cout<<"Masukan total detik : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<j<<":"<<m<<":"<<d<< endl;
	return td;
}
//deklarasi function jam, menit, detik, ke total detik
int total_detik(){
	int j,m,d,td;
	cout<<"Masukan Jam : ";
	cin>>j;
	cout<<"Masukan Menit : ";
	cin>>m;
	cout<<"Masukan Detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<" Total Detik : "<<td<< endl;
	return td;
}
