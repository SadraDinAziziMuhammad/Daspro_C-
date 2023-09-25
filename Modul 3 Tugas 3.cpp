#include<iostream>
#include <stdlib.h>
#include <conio.h>
const float phi=3.14;
using namespace std;
int main()
{
    int iter=0, pil, a, b, c, d;
    float volum, luas;
    bool loop=true;
    while(loop)
    {
        system("cls");
        cout<< "======Program Menghitung Luas Penampang dan Volume Bangun Ruang======"<< endl;
        cout<< "[1] Kubus "<< endl;
        cout<< "[2] Balok"<< endl;
        cout<< "[3] Kerucut"<< endl;
        cout<< "[4] Tabung"<< endl;
        cout<< "[5] Bola"<< endl;
        cout<<"=================================================================\n";
        cout<< "Pilihan Anda: ";
        cin>> pil;
    switch(pil)
    {
    case 1:
        cout << "====Anda memilih bangun ruang kubus====" << endl;
        cout << "Masukan panjang rusuk  : ";
        cin >> a;
        volum = a*a*a;
        luas = a*a*6;
        cout << "Volume Kubus : " << volum << endl;
        cout << "Luas Penampang Kubus : " << luas << endl;
        break;
    case 2:
        cout << "====Anda memilih bangun ruang balok====" << endl;
        cout << "Masukan panjang : ";
        cin >> a;
        cout << "Masukan lebar : ";
        cin >> b;
        cout << "Masukan tinggi : ";
        cin >> c;
        volum = a*b*c;
        luas = ((a * b) + (b * c) + (c * a)) * 2;
        cout << "Luas Penampang Balok : " << luas << endl;
        cout << "Volume Balok : " << volum << endl;
        break;

    case 3:
        cout << "====Anda memilih bangun ruang kerucut====" << endl;
        cout << "Masukan panjang jari-jari alas kerucut : ";
        cin >> a;
        cout << "Masukan tinggi kerucut : ";
        cin >> b;
        cout << "Masukan garis pelukis kerucut : ";
        cin >> d;
        volum = (phi * a * a * b)/3;
        luas = (phi * a * (a + d));
        cout << "Volume Kerucut : " << volum << endl;
        cout << "Luas Penampang Kerucut : " << luas << endl;
        break;
    case 4:
        cout << "====Anda memilih bangun ruang tabung====" << endl;
        cout << "Masukan panjang jari-jari alas tabung : ";
        cin >> a;
        cout << "Masukan tinggi tabung : ";
        cin >> b;
        volum = phi * a * a * b;
        luas = (phi * a * 2) * (b * a);
        cout << "Volume Tabung : " << volum << endl;
        cout << "Luas Penampang Tabung : " << luas << endl;
        break;
    case 5:
        cout << "====Anda memilih bangun ruang bola====" << endl;
        cout << "Masukan panjang jari-jari bola : ";
        cin >> a;
        volum = 4/3 * phi * a * a * a;
        luas = 4 * phi * a * a;
        cout << "Volume Bola : " << volum << endl;
        cout << "Luas Penampang Bola : " << luas << endl;
        break;
        case 0:
        loop = false;
        break;
    }
        cout << endl << "Tekan enter untuk kembali ke menu awal" << endl;
        return 0;
        getch();
}
}
