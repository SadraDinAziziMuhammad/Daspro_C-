#include <iostream>
using namespace std;
main()
{
	double rupiah, dollar, yen, poundsterling, euro;
	dollar = 11400, yen = 115, poundsterling = 18400, euro = 15400;
	cout<<"====Program mengkonversi rupiah ke dollar, yen, pounsterling, dan euro====\n\n";
	cout<<"Masukkan nilai rupiah : ";
	cin>>rupiah;
	cout<<"====================Hasil Konversi====================\n\n";
	cout<<rupiah<<" Rupiah = "<<rupiah/dollar<<" Dollar\n\n";
	cout<<rupiah<<" Rupiah = "<<rupiah/yen<<" Yen\n\n";
	cout<<rupiah<<" Rupiah = "<<rupiah/poundsterling<<" Poundsterling\n\n";
	cout<<rupiah<<" Rupiah = "<<rupiah/euro<<" Euro\n\n";
	cout<<"========================================";
}
