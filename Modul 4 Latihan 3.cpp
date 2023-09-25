#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Masukkan angka 1-10 untuk menebak " ; 
	cout << "Angka favorit saya ???\n "; 
	do
	{
		cin>>n;
	}
	while ( n != 9 );
	cout<< "ya, 9 adalah angka favorit saya \n"; return(0);
}

