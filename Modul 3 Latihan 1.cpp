#include <iostream>
using namespace std;
int main()
{
	int angka;
	cout<<"Masukkan angka [0-7] : ";
	cin>>angka;
	switch(angka) {
	case 0: 
	case 1: cout<<"Belajar menggunakan";
	case 2: cout<<" Bahasa C";
	case 3: cout<<" Pernyataan Switch case \n";break;
	case 4: break;
	case 5: cout<<"program ini menggunakan efek"; 
	case 6: 
	case 7: cout<<" dari pernyataan break \n";break; 
	default : cout<<"Angka yang anda masukkan salah \n"; }
	cout<<"Keluar dari pernyataan switch";
return(0);
}

