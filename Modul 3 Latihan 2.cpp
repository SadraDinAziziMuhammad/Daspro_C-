#include <iostream> 
using namespace std; 
#include <math.h> 
#include <conio.h> 
#include <stdlib.h> 
int main()
{
	int alas,tinggi, pilihan;
	double sisi_miring, luas, keliling; 
	cout<<"==========Menghitung Segitiga siku-siku=========="<<endl;
	cout<<"[1] Menghitung sisi miring segitiga"<<endl; 
	cout<<"[2] Menghitung Luas segitiga"<<endl; 
	cout<<"[3] Menghitung keliling segitiga"<<endl; 
	cout<<"======================================"<<endl; 
	cout<<"Masukkan pilihan anda : "; 
	cin>>pilihan; 
	switch(pilihan)
	{
		case 1:
			system("cls");
			cout<<"Masukkan alas segitiga : ";
			cin>>alas;
			cout<<"Masukkan tinggi segitiga : ";
			cin>>tinggi;sisi_miring=sqrt((alas*alas)+(tinggi*tinggi));
			cout<<"Sisi miring segitiga adalah : "<<sisi_miring;
			break;
		case 2:
			system("cls");
			cout<<"Masukkan alas segitiga : ";
			cin>>alas;
			cout<<"Masukkan tinggi segitiga : ";
			cin>>tinggi;
			luas=(alas*tinggi)/2;
			cout<<"Luas segitiga adalah : "<<luas;
			break;
		case 3:
			system("cls");
			cout<<"Masukkan alas segitiga : ";
			cin>>alas;
			cout<<"Masukkan tinggi segitiga : ";
			cin>>tinggi;sisi_miring=sqrt((alas*alas)+(tinggi*tinggi));keliling=sisi_miring+alas+tinggi;
			cout<<"Keliling segitiga adalah : "<<keliling;
			break;
		default :
			cout<<"pilihan anda salah";
			break;
	}
	getche();
	return(0);
}

