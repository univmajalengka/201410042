#include<iostream>
using namespace std;
int main()
{
	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	
	int a,b, menu;
	float c,d,e,f;
	string operasi;
	
	cout<<"pilih opsi menu : ";
	cin>>menu;
	cout<<"Masukan Bilangan pertama : ";
	cin>>menu;
	cout<<"Masukan Bilangan kedua : ";
	cin>>menu;
	
	if(menu==1){
		cin>>a;
		cin>>b;
		c=a+b;
		cout<<c;
	}else if(menu==2){
		cin>>a;
		cin>>b;
		c=a-b;
		cout<<c;
	}else if(menu==3){
		cin>>a;
		cin>>b;
		c=a*b;
		cout<<c;
	}else if(menu==4){
		cin>>a;
		cin>>b;
		c=a/b;
		cout<<c;
	}else if(menu==5){
		cin>>a;
		cin>>b;
		c=a%b;
		cout<<c;
	}else{
		
		cout<<"Menu Tidak Ada"<<endl;
	}
	return false;
}
