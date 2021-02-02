#include <iostream>
using namespace std;
void tampil(){
	cout<<" ======================================================"<<endl;
}
int main(){
	//nama pembuat
	system ("color A");
	tampil();
	cout<<"		program menghitung gaji bersih"<<endl;
	cout<<" Nama  : Ibnu Almugni Akbarudin"<<endl;
	cout<<" NPM   : 20.14.1.0042 "<<endl;
	cout<<" Kelas : 1 A "<<endl;
	cout<<" Prodi : Informatika"<<endl;
	cout<<" Tugas : Menghitung gaji bersih"<<endl;
	
	//deklarasi variabel
	const float persentunjangan = 0.2;
	const float persenpajak = 0.15;
	string namakaryawan;
	int gajipokok, gajibersih, pajak, tunjangan;
	tampil();
	//inputan nama dan gaji
  	cout << " Nama Karyawan : ";
	cin>>namakaryawan;
  	cout << " Gaji pokok    : ";
	cin>>gajipokok;
	tampil();
	//perhitungan total gaji bersih
 	tunjangan = gajipokok * persentunjangan;
 	pajak = gajipokok * persenpajak;
 	gajibersih = gajipokok + tunjangan - pajak;
 	cout<<" Nama Karyawan : "<<namakaryawan<<endl;
	cout<<" Gaji Bersih   : Rp. "<<gajibersih<<endl;
  tampil();
  return 0;
}
