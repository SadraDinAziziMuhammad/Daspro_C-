#include <iostream>
using namespace std;
main(){
	int n,usia,umur=20;
	cout<<"\t\t\t\tTEBAKLAH USIAKU";
	cout<<"\n\n\nberapakah usiaku? ";
	cin>>usia;
	if(usia<umur)
		cout<<"\n\tTerlalu muda silahkan tebak lagi\n\n"; else if(usia>umur)
		cout<<"\n\tTerlalu tua silahkan tebak lagi\n\n"; else
		cout<<"\n\tTebakan anda benar";
}
