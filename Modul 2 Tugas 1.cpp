#include<iostream>
using namespace std;
int main()
{
    int pesan, komplit=1, milk=2, buah=3;
    cout<< "\t\t\t\tSOUP BUAH";
    cout<< "\n\n\nCategori dan harganya :?";
    cout<< "\n\n\t1. Komplit = Rp 10000";
	cout<< "\n\t2. No Milk = Rp 8000\n\t3. Buah saja = Rp 5000";
    cout<< "\n\n\tSilahkan Pesan (1/2/3): ";
    cin>>pesan;
    if(pesan==komplit)
	cout<< "\n\tAnda harus membayar Rp 10000 Trimakasih";
    else if(pesan==milk)	  
	cout<< "\n\tAnda harus membayar Rp 8000 Trimakasih";
    else	  
	cout<< "\n\tAnda harus membayar Rp 5000 Trimakasih";
}

