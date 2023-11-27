#include <iostream>
#define PHI 3.14;
using namespace std;
const int MAX_ROW = 100, MAX_COL = 100;

// Sementara pakai variabel global dlu, kalo ada yg ngerti pass by pointer atau
// pass by reference boleh diganti. Kata bu wilis harus pakai itu soalnya 😅😅😅

int pilih;

void menu1() {
  // still in construction
  // jangan diapa-apain
}
// baris ini Khusus fungsi/prosedure menu 2
void menu2() {
  float p, l, t, r, alas, keliling; // kenapa ngga float aja?
menu2:

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Selamat datang di menu 2 (Bangunan tiga dimensi)\n" << endl;

  cout << "1. Kubus" << endl;
  cout << "2. Balok" << endl;
  cout << "3. Prisma segitiga" << endl;
  cout << "4. Tabung" << endl;
  cout << "5. Bola" << endl;
  cout << "6. Exit" << endl;

  cout << "\nPilih Menu : ";
  cin >> pilih;

  switch (pilih) {
  case 1:                       // kubus
    cout << "\033[0;0H\033[2J"; // alternatif system("cls");

    cout << "Pilih menu yang diinginkan : " << endl;
    cout << "1. Menghitung volume kubus" << endl;
    cout << "2. Menghitung luas Permukaan kubus" << endl;
    cout << "3. Kembali ke menu 2" << endl;

    cout << "\nPilih menu : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Masukkan panjang sisi : ";
      cin >> p;

      cout << "Volume kubus adalah : " << p * p * p << endl;
      break;
    case 2:
      cout << "Masukkan panjang sisi : ";
      cin >> p;

      cout << "Luas Permukaan kubus adalah : " << 6 * p * p << endl;
      break;
    case 3:
      goto menu2;
      break;
    default:
      cout << "Silakan pilih menu yang sesuai.";
      break;
    }
    break;
  // balok volume dan luas permukaan)
  case 2:
    cout << "\033[0;0H\033[2J"; // alternatif system("cls");

    cout << "Pilih menu yang diinginkan : " << endl;
    cout << "1. Menghitung volume dan luas permukaan balok" << endl;
    cout << "3. Kembali ke menu 2" << endl;

    cout << "\nPilih menu : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Masukkan panjang : ";
      cin >> p;

      cout << "Masukkan lebar : ";
      cin >> l;

      cout << "Masukkan tinggi : ";
      cin >> t;

      cout << "\nVolume balok adalah : " << p * l * t << endl;
      cout << "Luas permukaan balok adalah : " << 2 * (p * l + p * t + l * t)
           << endl;
      break;
    case 2:
      goto menu2;
      break;
    default:
      cout << "Silakan pilih menu yang sesuai.";
      break;
    }
    break;
  // prisma segitiga (volume dan luas permukaan)
  case 3:
    cout << "\033[0;0H\033[2J"; // alternatif system("cls");

    cout << "Pilih menu yang diinginkan : " << endl;
    cout << "1. Menghitung volume dan luas permukaan prisma segitiga" << endl;
    cout << "3. Kembali ke menu 2" << endl;

    cout << "\nPilih menu : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Masukkan alas: ";
      cin >> alas;

      cout << "Masukkan tinggi : ";
      cin >> t;

      cout << "Masukkan keliling alas : ";
      cin >> keliling;

      cout << "\nVolume prisma segitiga adalah : " << (alas * t / 2) * t
           << endl;
      cout << "Luas permukaan prisma segitiga adalah : "
           << (2 * alas) + (keliling * t) << endl;
      break;
    case 2:
      goto menu2;
      break;
    default:
      cout << "Silakan pilih menu yang sesuai.";
      break;
    }

    break;
  // tabung (volume dan luas permukaan)
  case 4:
    cout << "\033[0;0H\033[2J"; // alternatif system("cls");

    cout << "Pilih menu yang diinginkan : " << endl;
    cout << "1. Menghitung volume tabung" << endl;
    cout << "2. Menghitung luas Permukaan tabung" << endl;
    cout << "3. Kembali ke menu 2" << endl;

    cout << "\nPilih menu : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Masukkan jari-jari : ";
      cin >> r;
      cout << "Masukkan tinggi : ";
      cin >> t;

      cout << "Volume tabung adalah : " << PHI * r * r * t << endl;
      break;
    case 2:
      cout << "Masukkan jari-jari : ";
      cin >> r;
      cout << "Masukkan tingii : ";
      cin >> t;

      cout << "Luas Permukaan tabung adalah : " << 2.0 * PHI * r * (r + t)
           << endl;
      break;
    case 3:
      goto menu2;
      break;
    default:
      cout << "Silakan pilih menu yang sesuai.";
      break;
    }
    break;
  // bola (volume dan luas permukaan)
  case 5:
    cout << "\033[0;0H\033[2J"; // alternatif system("cls");

    cout << "Pilih menu yang diinginkan : " << endl;
    cout << "1. Menghitung volume bola" << endl;
    cout << "2. Menghitung luas Permukaan bola" << endl;
    cout << "3. Kembali ke menu 2" << endl;

    cout << "\nPilih menu : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Masukkan jari-jari : ";
      cin >> r;

      cout << "Volume bola adalah : " << 4.0 / 3.0 * PHI * r * r * r << endl;
      break;
    case 2:
      cout << "Masukkan jari-jari : ";
      cin >> r;

      cout << "Luas Permukaan bola adalah : " << 4.0 * PHI * r * r << endl;
      break;
    case 3:
      goto menu2;
      break;
    default:
      cout << "Silakan pilih menu yang sesuai.";
      break;
    }
    break;
  // exit
  case 6:
    break;
  default:
    cout << "Silakan pilih menu yang sesuai.";
    break;
  }
}

// Akhir dari fungsi/prosedure menu 2

// Fungsi/prosedure menu 3

void menu3() {
  int pilih;
  int a, b, c, d;
  int matriks1[MAX_COL][MAX_ROW], matriks2[MAX_COL][MAX_ROW],
      perkalian12[MAX_COL][MAX_ROW];

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "1. Penjumlahan matriks" << endl;
  cout << "2. Pengurangan matriks" << endl;
  cout << "3. Perkalian matriks" << endl;
  cout << "4. Transpose matriks" << endl;

  cout << "\nPilih Menu : " << endl;
  cin >> pilih;

  // input ukuran matriks
  cout << "\nMatriks 1 dengan ukuran a * b" << endl;
  cout << "Input nilai a : ";
  cin >> a;
  cout << "Input nilai b : ";
  cin >> b;
  cout << endl;
  cout << "Matriks 2 dengan ukuran c * d" << endl;
  cout << "Input nilai c : ";
  cin >> c;
  cout << "Input nilai d : ";
  cin >> d;

  // input nilai matriks
  cout << "\ninput matriks 1" << endl;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << "matriks 1 [" << i << "][" << j << "] : ";
      cin >> matriks1[i][j];
    }
  }
  cout << endl << "input matriks 2" << endl;
  for (int k = 0; k < c; k++) {
    for (int l = 0; l < d; l++) {
      cout << "matriks 2 [" << k << "][" << l << "] : ";
      cin >> matriks2[k][l];
    }
  }

  // hasil inputan matriks
  cout << endl << "hasil matriks 1" << endl;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << matriks1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl << "hasil matriks 2" << endl;
  for (int k = 0; k < c; k++) {
    for (int l = 0; l < d; l++) {
      cout << matriks2[k][l] << " ";
    }
    cout << endl;
  }

  switch (pilih) {
  case 1:
    // penjumlahan matriks
    break;
  case 2:
    // pengurangan matriks
    break;
  case 3:
    // perkalian matriks
    if (a == d && b == c) {
      cout << endl << "Hasil perkalian matriks :" << endl;
      for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {
          perkalian12[i][j] = matriks1[i][j] * matriks2[j][i];
          cout << perkalian12[i][j] << " ";
        }
        cout << endl;
      }
    } else {
      cout << "Perkalian matriks tidak bisa dilakukan!" << endl;
    }
    break;
  case 4:
    // transpose matriks
    break;
  }
}

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

  switch (pilih) {
  case 1:
    // menu1(); // Verrel
    break;
  case 2:
    menu2(); // Luqmaan dan Raihan
    break;
  case 3:
    menu3(); // Ekin dan Bintang
    break;
  case 4:
    // menu4();
    break;
  case 5:
    break;
  default:
    cout << "Silakan pilih menu yang sesuai.";
    break;
  }
}