#include<iostream>
using namespace std;
int KPK(int i, int j)
{
int nilai, kpk;
for(int x = 1; x <= j; x++){ nilai = nilai + i; if(nilai % j == 0){
nilai;
break;}}
return nilai;
}
int main()
{
int a, b;
cout << "Program Menghitung KPK\n";
cout << "Angka ke-1 : ";
cin >> a;
cout << "Angka ke-2 : ";
cin >> b;
cout << "Kelipatan Persekutuan Terkecil antara "
<< a << " dan " << b << " = " << KPK(a, b) << endl;
}
