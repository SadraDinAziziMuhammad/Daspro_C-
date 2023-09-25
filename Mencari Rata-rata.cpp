#include <iostream>
using namespace std;
main(){

	float angka,total= 0, rata;
	int jumlah;
	
	cout<<"Mencari Rata-rata (jumlah angka ditentukan)\n\n";
	cout<<"masukkan jumlah angka : "; cin>>jumlah;
	cout<<endl;
	
	for (int i= 1; i<=jumlah; i++){
		cout<<"masukkan angka: "; cin>> angka;
		total= total+angka;
	}
	
	cout<<endl;
	cout<<"Total: "<<total<<endl;
	rata= total/jumlah;
	cout<<"Rata-rata: "<<rata;
return 0;	
}

