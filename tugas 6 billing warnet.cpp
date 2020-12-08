//konversi jam menit dan detik ke total detik
//Konversi total detik ke Jam, Menit dan Detik
//mencari perbedaan dari 2 buah jam (program billing)
#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
	int	j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3,sm;
	system ("color A");
	cout<<"			program billing	warnet		"<<endl;
	cout<<" Nama  : Ibnu Almugni Akbarudin"<<endl;
	cout<<" NPM   : 20.14.1.0042 "<<endl;
	cout<<" Kelas : 1 A "<<endl;
	cout<<" Prodi : Informatika"<<endl;
	cout<<" Tugas : membuat billing warnet"<<endl;
	cout<<"======================================================"<<endl;
	//masukan waktu awal contoh: 9:25:30"<<endl;
	cout<<" Masukan Jam	: ";
	cin>>j1;
	cout<<" Masukan Menit : ";
	cin>>m1;
	cout<<" Masukan Detik : ";
	cin>>d1;	
	cout<<" Anda memulai pada :"<<" jam "<<j1<<" : "<<" menit "<<m1<<" : "" detik "<<d1;
	cout<<""<<endl;
	cout<<"======================================================"<<endl;
	//masukan waktu akhir contoh: 10:26:31"<<endl;
	cout<<" Masukan Jam : ";
	cin>>j2;
	cout<<" Masukan Menit : ";
	cin>>m2;
	cout<<" Masukan Detik : ";
	cin>>d2;
	cout<<" Anda selesai pada : "<<" jam "<<j2<<" : "<<" menit "<<m2<<" : "" detik "<<d2;
	cout<<""<<endl;

	//proses konversi waktu ke total detik
	td1 = (j1*3600)+(m1*60)+d1;
	td2 = (j2*3600)+(m2*60)+d2;
	//operasi pengurangan
	td3 = td2-td1;
	//konversi td ke j3, m3, d3
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout <<" Anda Bermain selama :  >> "<<j3<<":"<<m3<<":"<<d3;
	cout<<""<<endl;
	cout<<" ==========================================================================";
	cout<<""<<endl;
	cout <<" 		Terimakasih Telah Bermain di IBNU.net		 ";
	cout <<""<<endl;
	cout <<" Kumpulkan Satu Juta Struk ini dan Tukarkan dengan Satu Cup Teh Gelas ";
	return 0;
}

