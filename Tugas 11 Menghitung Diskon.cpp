//IF ELSE
#include<iostream>
using namespace std;

void tampil(){
	cout<<" ==========================================="<<endl;
}

	int main(){
	system (" color f2");
	cout << " Nama : Ibnu Almugni Akbarudn"<<endl;
	cout << " NPM : 20.14.1.0042 "<<endl;	
	cout << " Kelas : 1 / A "<<endl;
	cout << " Tugas Algoritma dan Pemograman #11"<<endl;
	tampil();
	int x, bayar, diskon, akhir;
	cout<<"	Program Diskon Harga	"<<endl<<endl;
	tampil();
	cout << ""<<endl;
	cout<<" Masukan Total Pembayaran = ";
	cin>>bayar;
	if ((bayar>=0) && (bayar<25000)){
		diskon=bayar*0;
		akhir=bayar-diskon;
	cout<< " Yah, Anda Kurang Banyak Belanjanya Untuk Dapet Diskon "<<endl;
	}
	else if ((bayar>=25000) && (bayar < 50000)){
		diskon = bayar * 0.10;
		akhir = bayar - diskon;
	cout<<" Selamat, Anda Mendapatkan Diskon 10% "<<endl;	
	}
	else if ((bayar>=50000) && (bayar < 100000)){
		diskon = bayar * 0.125;
		akhir = bayar - diskon;
	cout<<" Selamat, Anda Mendapatkan Diskon 12.5% "<<endl;
	}
	else if ((bayar >= 100000) && (bayar > x)){
		diskon = bayar * 0.15;
		akhir = bayar - diskon;
	cout<<""<<endl;
	cout<<" Selamat, Anda Mendapatkan Diskon 15% "<<endl;
	tampil();
	}
	else { akhir = bayar;
	tampil();
	}
	
	cout << endl << " Jadi Total Pembayarannya : " << akhir << endl;
	cout << " Uang dari Pembeli : " ;
	cin >> bayar;
	cout <<" kembali : Rp. "<< 	bayar - akhir <<endl; 
	
	cin.get();
	return 0;
}
