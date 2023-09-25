#include <iostream>
using namespace std;
int n, i, a[50];
proses()
{
	for(i=1;i<=n;i++)
	{
		if(i<2)
			a[i]=i;
		else
			a[i]=a[i-2]+a[i-1];
		if(i==n)
			cout<<a[i];
		else
			cout<<a[i]<<", ";
	}
	return(n);
}
main()
{
	cout<<"Masukkan jumlah suku : ";
	cin>>n;
	cout<<"\nDeret Fibonacci n = "<<n<<endl<<endl;
	proses();
}
