#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char A[]="DASPRO";
	cout<<"Mencari karakter p : "<<strchr(A, 'P')<<endl;
	cout<<"Mencari karakter x : "<<strchr(A, 'X')<<endl;
	return 0;
}
