#include <iostream>
using namespace std;

main()
{
	int jumlah_buku, lusin_buku;
	int lusin, buku;
	lusin_buku = 12;
	cout << "Masukkan Jumlah Buku : ";
	cin>> jumlah_buku;
	lusin = jumlah_buku / lusin_buku;
	buku = jumlah_buku % lusin_buku;
	cout << jumlah_buku << "Buku = " << lusin << "lusin, " << buku << "buku";
	
}
