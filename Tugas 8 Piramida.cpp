#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void tampil(){
	cout<<"==========================================="<<endl;
}
	int main(){
	system ("color 2");
	cout<<"Nama  : Ibnu Almugni Akbarudin" << endl;
	cout<<"NPM   : 20.14.1.0042"<< endl;
	cout<<"Tugas : ke 8 membuat setengah segitiga bintang" << endl;
	cout<<"Kelas : 1A "<<endl;
tampil();	
	int i,j;
	for(i=1;i<=8;i++) {
	for(j=1;j<=i;j++) {
    cout<<"*";
    }
    cout<<endl;
	}
  return 0;
}
