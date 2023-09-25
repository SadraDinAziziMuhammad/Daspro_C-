#include <iostream>
using namespace std;

float gradien1 (float y1, float y2, float x1, float x2);
float gradien2 (float y1, float y2, float x1, float x2);

int main(){
	int pilihan;
	float a,b,c,d;
	float hasil;
	cout << "Menghitung Nilai Gradien" << endl;
	cout << "------------------------" << endl << endl;
	cout << "Rumus Gradien : (y2-y1) / (x2-x1) " << endl << endl;
	
	cout << "Nilai y1 :  ";
	cin  >> a;
	cout << "Nilai y2 :  ";
	cin  >> b;
	cout << "Nilai x1 :  ";
	cin  >> c;
	cout << "Nilai x2 :  ";
	cin  >> d;
	cout << endl;
	
	cout << "1. Menghitung Nilai Gradien " << endl;
	cout << "2. Menghitung Nilai Gradien dan Menentukan Arahnya" << endl;
	cout << "Masukkan Pilihan (1/2) : "; cin  >> pilihan ;
	cout << endl;

	switch (pilihan){
	
		case 1 :
			hasil = gradien1 (a,b,c,d);
			cout << "Nilai Gredien adalah : " << hasil << endl;
		break;
			
		case 2 :
			hasil = gradien2 (a,b,c,d);
			cout << "Nilai Gredien adalah : " << hasil << endl;
			if (hasil >= 1){
			cout <<  "Arah Gradien ke Kanan";}
			if (hasil <= -1){
			cout << "Arah Gradien ke Kiri";}
			else 
			cout << "Arah Gradien Horizontal";
		break;
	}
}
	
	float gradien1 (float y1, float y2, float x1, float x2){
		return ((y2-y1) / (x2-x1));
	}
	
	float gradien2 (float y1, float y2, float x1, float x2){
		return ((y2-y1) / (x2-x1));
	}

