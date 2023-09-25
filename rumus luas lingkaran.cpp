#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14159265;

int main() {
  float jari_jari, luas;

  cout << "Masukkan jari-jari lingkaran: ";
  cin >> jari_jari;

  luas = pi * pow(jari_jari, 2);

  cout << "Luas lingkaran adalah: " << luas << endl;

  return 0;
}

