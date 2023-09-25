#include<iostream>
using namespace std;
int main()
{
	long n,rev=0,d;
	cout<<"Masukkan Nomor:";
	cin>>n;
	while(n!=0)
	{
		d = n % 10;
		rev = ( rev * 10) + d;
		n = n / 10;
	}	
	cout<<"Kebalikan Nomor yang anda masukan adalah "<<rev;
}

