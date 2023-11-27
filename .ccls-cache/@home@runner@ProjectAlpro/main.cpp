#include <iostream>
using namespace std;

// Sementara pakai variabel global dlu, kalo ada yg ngerti pass by pointer atau pass by reference boleh diganti. Kata bu wilis harus pakai itu soalnya 😅😅😅

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

// baris ini Khusus fungsi/prosedure menu 2
void menu2() {
  
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Selamat datang di menu 2 (Bangun tiga dimensi)\n" << endl; 

  cout << "1. Kubus" << endl;
  cout << "2. Balok" << endl;
  cout << "3. Prisma segitiga" << endl;
  cout << "4. Tabung" << endl;
  cout << "5. Bola" << endl;
  cout << "6. Exit" << endl;
  
  cout << "\nPilih Menu : ";
  cin >> pilih;

  switch(pilih) {
    case 1 : // kubus
      int p;
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Pilih menu yang diinginkan : " << endl;
      cout << "1. Menghitung volume kubus" << endl;
      cout << "2. Menghitung luas Permukaan kubus" << endl;
      cout << "3. Kembali ke menu 2" << endl;

      cout << "\nPilih menu : ";
      cin >> pilih;

      switch(pilih) {
        case 1 :
          cout << "\033[0;0H\033[2J"; // alternatif system("cls");

          cout << "Masukkan panjang sisi : ";
          cin >> p;

          cout << "Volume kubus adalah : " << p * p * p << endl;
        break;
        case 2 :
          cout << "Masukkan panjang sisi : ";
          cin >> p;

          cout << "Luas Permukaan kubus adalah : " << 6 * p * p << endl;
        break;
        case 3 :
        break;
        default :
          cout << "Silakan pilih menu yang sesuai.";
        break;
      }
    break;
    // balok (volume dan luas permukaan)
    case 2 : 
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");
    break;
    // prisma segitiga (volume dan luas permukaan)
    case 3 : 
    break;
    // tabung (volume dan luas permukaan)
    case 4 :
    break;
    // bola (volume dan luas permukaan)
    case 5 : 
    break;
    // exit
    case 6 :
    break;
    default :
    cout << "Silakan pilih menu yang sesuai.";
    break;
  }
}


// Akhir dari fungsi/prosedure menu 2

// Fungsi/prosedure menu 3



// Akhir fungsi/prosedur menu 3

int main() {
  cout << "Projek Alpro" << endl;
  cout << "\nMenu : " << endl;
  cout << "\n1. Bangun Dua Dimensi" << endl;
  cout << "2. Bangun Tiga Dimensi" << endl;
  cout << "3. Matriks" << endl;
  cout << "4. About" << endl;
  cout << "5. Exit" << endl;

  cout << "\nPilih Menu : ";
  cin >> pilih;

  switch(pilih) {
    case 1 : 
      // menu1(); // Verrel
    break;
    case 2 :
      menu2(); // Luqmaan dan Raihan
    break;
    case 3 :
      // menu3(); // Ekin dan Bintang
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