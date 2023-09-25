#include <iostream>
#include <string>
using namespace std;
main()
{
	char nama [20], nim[11];
	int nilai_uas, nilai_uts, nilai_tugas;
	cout<<"NIM             : ";
	cin>>nim;
	cout<<"Nama Mahasiswa  : ";
	cin>>nama;
	cout<<"Nilai Tugas     : ";
	cin>>nilai_tugas;
	cout<<"Nilai UTS       : ";
	cin>>nilai_uts;
	cout<<"Nilai UAS       : ";
	cin>>nilai_uas;
	cout<<"------------------------------------------------\n";
	int uts=nilai_uts*30/100, uas=nilai_uas*50/100, tugas=nilai_tugas*20/100;
	int nilai_akhir=uts+uas+tugas;
	string ket;
	char nilai_huruf;

	if(nilai_akhir>=70)
	{
		if(nilai_akhir>=90){nilai_huruf='A';}
		else{nilai_huruf='B';}
		}
	else if(nilai_akhir>=50)
	{
	if(nilai_akhir>=60){nilai_huruf='C';}
	else{nilai_huruf='D';}
	}
	else{nilai_huruf='E';}

	if (nilai_huruf=='A' || nilai_huruf=='B' || nilai_huruf=='C')
	{ket="Lulus";}
	else {ket="Mengulang";}
	cout<<"LAPORAN NILAI MAHASISWA\n";
	cout<<"Nim             : "<<nim<<endl;
	cout<<"Nama            : "<<nama<<endl;
	cout<<"Nilai Akhir     : "<<nilai_akhir;
	cout<<"\t\tNilai Huruf : "<<nilai_huruf<<endl;
	cout<<"-------------------------------------------------\n";
	cout<<"Ket : "<<ket<<endl;
}
