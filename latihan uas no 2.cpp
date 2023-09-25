#include <iostream>
using namespace std;
main()
{
	float bilangan;
	float bilangan1, bilangan2, bilangan3;
	float jumlah;
	float rata2;
	cout<<"Berapa banyaknya bilangan yang akan dihitung rata-ratanya? ";
	cin>>bilangan;
	cout<<"\n";
	cout<<"Bilangan ke-1 : ";
	cin>>bilangan1;
	cout<<"Bilangan ke-2 : ";
	cin>>bilangan2;
	cout<<"Bilangan ke-3 : ";
	cin>>bilangan3;
	jumlah = bilangan1 + bilangan2 + bilangan3;
	rata2 = jumlah/3;
	cout<<"Rata-rata bilangan-bilangan tersebut adalah : "<< rata2;
}
