#include <iostream>
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
	int a,b;
	for(a=1;b<=5;a++) {
	for(b=1;b<=a;b++) {
    cout<<"*";
    }
    cout<<endl;
	}
  return 0;
}
