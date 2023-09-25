#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
char operatore;
double operand1, operand2;
cout<<"==================================\n\n";
cout<<" Program kalkulator sederhana.....\n"<<endl;
cout<<"operator yang dapat digunakan adalah : "<<endl; 
cout<<"* =>perkalian\n"<<endl;
cout<<"/ =>pembagian\n"<<endl;
cout<<"+ =>penjumlahan\n"<<endl;
cout<<"- =>pengurangan\n"<<endl;
cout<<"Contoh Menghitung => 5/2 Lalu tekan ENTER"<<endl;
cout<<endl<<"Silahkan Menghitung Angka : "; 
cin>>operand1>>operatore>>operand2; 
switch (operatore){
case '*' : 
cout <<"Hasil = "<< operand1 * operand2;
break;
case '/' : 
cout <<"Hasil = "<< operand1 / operand2;
break;
case '+' : 
cout <<"Hasil = "<< operand1 + operand2;
break;
case '-' : 
cout <<"Hasil = "<< operand1 - operand2;
break;
default : 
cout<<"Perintah Anda Salah Silahkan Ulangi";
}
return(0);
}
