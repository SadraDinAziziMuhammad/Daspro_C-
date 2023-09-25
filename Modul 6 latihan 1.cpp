#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[] = "ABCD";
	char b[5];
	
	strcpy(b, a);
	cout<<"String a = "<<a<<endl;
	cout<<"String b = "<<b;
	return 0;
}
