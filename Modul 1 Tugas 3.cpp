#include <iostream>
using namespace std; int main()
{
float a, b, c, d, e, ab, de, cde, abcde; 
cout<<"Masukan nilai a = ";
cin>>a;
cout<<"\nMasukan nilai b = "; 
cin>>b;
cout<<"\nMasukan nilai c = "; 
cin>>c;
cout<<"\nMasukan nilai d = "; 
cin>>d;
cout<<"\nMasukan nilai e = "; 
cin>>e;
ab = a * b; 
de = d - e; 
cde = c * de;
abcde = ab / cde;
cout<<"\n"<<a<<" * "<<b<<" / "<<c<<"("<<d<<" - "<<e<<") = ";
cout<<ab<<" / "<<c<<"("<<de<<")\n                  = ";
cout<<ab<<" / "<<cde<<"\n                  = ";
cout<<abcde;
}

