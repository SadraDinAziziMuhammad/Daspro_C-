#include<iostream>
using namespace std;
int urutan(int x);
int main()
{
int angka;
cout << "Masukkan Angka : ";
cin >> angka;
cout << "Urutan Angka : "<< endl;
cout << urutan(angka);
return 0;
}
int urutan(int x)
{
if(x != 0){
cout << x << " ";
x -= 1;
urutan(x);
}else {
return 0;}}
