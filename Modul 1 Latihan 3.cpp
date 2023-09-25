#include <iostream>
using namespace std;
main()
{
	float q1, q2, q3;
	float qtotal, uts, uas;
	float total;
	cout<<"====================KUIS====================\n";
	cout<<"Masukkan nilai kuis pertama\t: ";
	cin>>q1;
	cout<<"\n";
	cout<<"Masukkan nilai kuis kedua\t: ";
	cin>>q2;
	cout<<"\n";
	cout<<"Masukkan nilai kuis ketiga\t: ";
	cin>>q3;
	cout<<"\n";
	cout<<"====================UTS====================\n";
	cout<<"Masukkan nilai UTS : ";
	cin>>uts;
	cout<<"\n";
	cout<<"====================UAS====================\n";
	cout<<"Masukkan nilai UAS : ";
	cin>>uas;
	cout<<"\n";
	qtotal = q1 + q2 + q3;
	total = qtotal - uts - uas;
	cout<<"Total kuis\t: "<< q1+q2+q3;
	cout<<"\n";
	cout<<"Rata rata kuis\t: "<< qtotal/3;
	cout<<"\n";
	cout<<"UTS\t\t: "<<uts;
	cout<<"\n";
	cout<<"UAS\t\t: "<<uas;
	cout<<"\n";
	cout<<"..............................\n";
	cout<<"Nilai akhir\t: "<<total;
	cout<<"\n";
}
