#include <iostream>
using namespace std;
int main(){
	int warna1,warna2;
	cout<<"\tNomor WARNA DASAR : \n\t\t1. merah,\n\t\t2. kuning,\n\t\t3. biru";
	cout<<"\n\n\tMasukkan nomor dari 2 warna dasar";
	cout<<"\n\t\tNomor Warna 1 : ";
	cin>>warna1;
	cout<<"\n\t\tNomor Warna 2 : ";
	cin>>warna2;
	cout<<"\n";
	if(warna1==1){
		if(warna2==2)
		cout<<"\t\tKombinasi warna merah & kuning \n\t\tmenghasilkan warna JINGGA"; else if(warna2==1)
		cout<<"\t\tKombinasu warna merah & merah \n\t\tmenghasilkan warna MERAH"; else
		cout<<"\t\tKombinasi warna merah & biru \n\t\tmenghasilkan warna UNGU";
	}
	else if(warna1==2){
		if(warna2==1)
		cout<<"\t\tKombinasi warna kuning & merah \n\t\tmenghasilkan warna JINGGA"; else if(warna2==2)
		cout<<"\t\tKombinasi warna kuning & kuning \n\t\tmenghasilkan warna KUNING"; else
		cout<<"\t\tKombinasi warna Kuning & biru \n\t\tmenghasilkan warna HIJAU";
	}	
	else{
		if(warna2==1)
		cout<<"\t\tKombinasi warna biru & merah \n\t\tmenghasilkan warna UNGU"; else if(warna2==3)
		cout<<"\t\tKombinasi warna biru & kuning \n\t\tmenghasilkan warna HIJAU"; else
		cout<<"\t\tKombinasi warna biru & biru \n\t\tmenghasilkan warna BIRU";
	}
}
