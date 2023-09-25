#include <iostream>
using namespace std;
int main()
{
	int pilihan;
	char ulang;
    do
    {
    	cout << "##  Daftar Menu   ##" << endl;
    	cout << "==============================" << endl;
    	cout << "1. Kalimat Tauhid" << endl;
    	cout << "2. Kalimat Takbir" << endl;
    	cout << endl;
 
    	cout << "Pilihan anda: ";
    	cin >> pilihan;
    	for (int j =0; j <= 10; j++){
    	switch(pilihan){
   	case 1:
        cout << " Lailahaillallah" << endl;
        break;
    case 2:
        cout << " Allahuakbar" << endl;
        break;
}
}
	cout << endl;
	cout << "Ingin memilih menu lain (y/t)? ";
	cin >> ulang;
	cout << endl;
}
    while (ulang!= 't');
    cout << "Terimakasih...";
	cout << endl;
	return 0;
}
