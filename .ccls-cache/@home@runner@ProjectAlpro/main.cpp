#include <iostream>
using namespace std;

int pilih;

void menu1() {
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "1. Persegi Panjang" << endl;
  cout << "2. Persegi" << endl;
  cout << "3. Segitiga" << endl;
  cout << "4. Lingkaran" << endl;
  cout << "5. Jajar Genjang" << endl;
  cout << "6. Belah Ketupat" << endl;
  cout << "7. Trapesium" << endl;
  cout << "8. Kembali ke menu utama" << endl;

  cout << "\nPilih Menu : " << endl;
  cin >> pilih;

  switch(pilih) {
    case 1 :
    break;
    case 2 :
    break;
    case 3 :
    break;
    case 4 :
    break;
  }
}

void menu2() {
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "1. Kubus" << endl;
  cout << "2. Balok" << endl;
  cout << "3. Prisma segitiga" << endl;
  cout << "4. Tabung" << endl;
  cout << "5. Bola" << endl;
  cout << "6. Exit";

  switch(pilih) {
    case 1 :
      
    break;
    case 2 :
    break;
    case 3 :
    break;
    case 4 :
    break;
    case 5 :
    break;
    default :
    cout << "Silakan pilih menu yang sesuai.";
    break;
  }
}

int main() {
  cout << "Projek Alpro" << endl;
  cout << "Menu" << endl;
  cout << "1. Bangun Dua Dimensi" << endl;
  cout << "2. Bangun Tiga Dimensi" << endl;
  cout << "3. Matriks" << endl;
  cout << "4. About" << endl;
  cout << "5. Exit" << endl;

  cout << "\nPilih Menu : ";
  cin >> pilih;

  switch(pilih) {
    case 1 : 
      menu1();
    break;
    case 2 :
      // menu2();
    break;
    case 3 :
      // menu3();
    break;
    case 4 :
      // menu4();
    break;
    case 5 :
    break;
    default :
      cout << "Silakan pilih menu yang sesuai.";
    break;
  }
}