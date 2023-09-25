#include<iostream>
#include<conio.h>
using namespace std;
main()
{ 
int panjang,lebar,a,b;
cout<<"Masukkan panjang : ";
cin>>panjang;
cout<<"Masukkan lebar : ";
cin>>lebar;
for(a = 1; a <= lebar; a++) {
for(b = 1; b <= panjang; b++) {
if(a == 1 || a==lebar || b==1 || b==panjang){
cout<<" * ";
}
else{
	cout<<"   ";
}
}
cout<<endl;
}
return(0);
}

