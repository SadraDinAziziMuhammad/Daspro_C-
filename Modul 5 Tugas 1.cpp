#include <iostream>
using namespace std;
int FPB(int a, int b){
int r=a%b;
while (r!=0){
a=b;
b=r;
r=a%b;}
return (b);}
int main(){
int x,y;
cout<<"program menghitung FPB\n";
cout<<"angka ke-1: ";
cin>>x;
cout<<"angka ke-2: ";
cin>>y;
cout<<"\nFaktor Persekutuan Terbesar dari "<<x<<" dan "<<y<<" = "<< FPB(x,y);
return 0;}
