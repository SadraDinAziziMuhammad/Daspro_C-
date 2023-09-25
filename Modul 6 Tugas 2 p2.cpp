#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
main(){
char kata[6];
char ch;
strcpy(kata, "?ASPROG");
for (ch = 'A'; strcmp(kata, "DASPROG"); ch++){
cout<< kata<< endl;
kata[0] = ch;	}
cout<< "Setelah loop berhenti, kata adalah "<< kata;
getche();}

