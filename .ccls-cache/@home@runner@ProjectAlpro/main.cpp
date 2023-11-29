#include <iostream>
using namespace std;
const int MAX_ROW = 100, MAX_COL = 100;

// Sementara pakai variabel global dlu, kalo ada yg ngerti pass by pointer atau
// pass by reference boleh diganti. Kata bu wilis harus pakai itu soalnya 😅😅😅
int pilih;
char kembali;

void menu1() {

  float p, l, r, ps, p1, p2;
  float PHI = 3.14;

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");
  cout << "\n";
  cout << "1. Persegi Panjang" << endl;
  cout << "2. Persegi" << endl;
  cout << "3. Segitiga" << endl;
  cout << "4. Lingkaran" << endl;
  cout << "5. Jajar Genjang" << endl;
  cout << "6. Belah Ketupat" << endl;
  cout << "7. Trapesium" << endl;
  cout << "8. Kembali ke menu utama" << endl;

  cout << "\nPilih Menu : ";
  cin >> pilih;
  cout << "\n";

  switch (pilih) {
  case 1:
    cout << "Persegi Panjang \n" << endl;
    cout << "\n";
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar   : ";
    cin >> l;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << p * l << endl;
    cout << "keliling :" << (p * 2) + (l * 2) << endl;
    break;
  case 2:
    cout << "Persegi" << endl;
    cout << "\n";
    cout << "Masukkan Sisi : ";
    cin >> p;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << p * p << endl;
    cout << "keliling :" << p * 4 << endl;
    break;
  case 3:
    cout << "Segitiga" << endl;
    cout << "\n";
    cout << "1. Luas" << endl;
    cout << "2. Keliling " << endl;
    cout << "\n";
    cout << "\nPilih Menu : ";
    cin >> ps;
    cout << "\n";

    if (ps == 1) {
      cout << "Masukkan Alas : ";
      cin >> p;
      cout << "Masukkan Tinggi   : ";
      cin >> l;
      cout << "---------------------";
      cout << "\n";
      cout << "Luas :" << (p * l) * 1 / 2 << endl;
    } else if (ps == 2) {
      cout << "Masukkan Sisi 1 : ";
      cin >> p;
      cout << "Masukkan Sisi 2 : ";
      cin >> l;
      cout << "Masukkan Sisi 3 : ";
      cin >> ps;
      cout << "---------------------";
      cout << "\n";
      cout << "keliling :" << p + l + ps << endl;
    } else
      cout << "Menu tidak ditemukan" << endl;
    break;
  case 4:
    cout << "Lingkaran" << endl;
    cout << "\n";
    cout << "Masukkan Jari-Jari : ";
    cin >> r;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << PHI * r * r << endl;
    cout << "keliling :" << PHI * 2 * r << endl;
    break;
  case 5:
    cout << "Jajar Genjang" << endl;
    cout << "\n";
    cout << "Masukkan Alas : ";
    cin >> p;
    cout << "Masukkan Tinggi   : ";
    cin >> l;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << p * l << endl;
    cout << "keliling :" << 2 * (p + l) << endl;
    break;
  case 6:
    cout << "Belah Ketupat" << endl;
    cout << "\n";
    cout << "-Luas-\n";
    cout << "Masukkan D-1 : ";
    cin >> p;
    cout << "Masukkan D-2 : ";
    cin >> l;
    cout << "-Keliling-\n";
    cout << "Masukkan Sisi: ";
    cin >> ps;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << p * l * 1 / 2 << endl;
    cout << "keliling :" << ps * 4 << endl;
    break;
  case 7:
    cout << "Trapesium" << endl;
    cout << "\n";
    cout << "Masukkan tinggi    : ";
    cin >> p;
    cout << "Masukkan sisi bawah: ";
    cin >> l;
    cout << "Masukkan Sisi atas : ";
    cin >> ps;
    cout << "Masukkan sisi miring 1: ";
    cin >> p1;
    cout << "Masukkan sisi miring 2: ";
    cin >> p2;
    cout << "---------------------";
    cout << "\n";
    cout << "Luas :" << ((ps + l) * 1 / 2) * p << endl;
    cout << "keliling :" << l + ps + p1 + p2 << endl;
    break;
  case 8:
    // balik (how?)
  default:
    cout << "Menu tidak ditemukan" << endl;
  }
}
// baris ini Khusus fungsi/prosedure di menu 2
void kubus() {
  float p;
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Masukkan panjang sisi : ";
  cin >> p;

  cout << "\nVolume kubus adalah : " << p * p * p << endl;

  cout << "Luas Permukaan kubus adalah : " << 6 * p * p << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void balok() {
  float p, l, t;
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

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void prisma() {
  float alas, t, keliling;
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Masukkan alas: ";
  cin >> alas;

  cout << "Masukkan tinggi : ";
  cin >> t;

  cout << "Masukkan keliling alas : ";
  cin >> keliling;

  cout << "\nVolume prisma segitiga adalah : " << (alas * t / 2) * t << endl;

  cout << "Luas permukaan prisma segitiga adalah : "
       << (2 * alas) + (keliling * t) << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void tabung() {
  float r, t;
  float PHI = 3.14;
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Masukkan jari-jari : ";
  cin >> r;
  cout << "Masukkan tinggi : ";
  cin >> t;

  cout << "\nVolume tabung adalah : " << PHI * r * r * t << endl;

  cout << "Luas Permukaan tabung adalah : " << 2.0 * PHI * r * (r + t) << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void bola() {
  float r;
  float PHI = 3.14;

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Masukkan jari-jari : ";
  cin >> r;

  cout << "\nVolume bola adalah : " << 4.0 / 3.0 * PHI * r * r * r << endl;

  cout << "Luas Permukaan bola adalah : " << 4.0 * PHI * r * r << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void menu2() {}

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

// Menu 4

void menu4() {
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "NIM dan Nama Anggota Kelompok : " << endl;
  cout << endl;
  puts("======================================================================"
       "=");
  puts("||  No  ||          NIM          ||               Nama               "
       "||");
  puts("======================================================================"
       "=");
  puts("||  1.  ||       123230069       ||     Verrel Prathama Aji          "
       "||");
  puts("||  2.  ||       123230070       ||     Muhammad Luqmaan             "
       "||");
  puts("||  3.  ||       123230072       ||     Muhammad Raihan Syamaidzar   "
       "||");
  puts("||  4.  ||       123230073       ||     Ekin Ananda Putra Sihombing  "
       "||");
  puts("||  5.  ||       123230075       ||     Bintang Jati Kesuma Subagyo  "
       "||");
  puts("======================================================================"
       "=");
}

// Akhir menu 4

int main() {
menuUtama:
  cout << "\033[0;0H\033[2J"; // alternatif system("cls");

  cout << "Projek Alpro" << endl;
  cout << "\nMenu : " << endl;
  cout << "\n1. Bangun Dua Dimensi" << endl;
  cout << "2. Bangun Tiga Dimensi" << endl;
  cout << "3. Matriks" << endl;
  cout << "4. About" << endl;

  cout << "\nPilih Menu : ";
  cin >> pilih;

  switch (pilih) {
  case 1:
    menu1(); // Verrel
    break;
  case 2:
    do {

      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Selamat datang di menu 2 (Bangunan tiga dimensi)\n" << endl;

      cout << "1. Kubus" << endl;
      cout << "2. Balok" << endl;
      cout << "3. Prisma segitiga" << endl;
      cout << "4. Tabung" << endl;
      cout << "5. Bola" << endl;
      cout << "6. Kembali ke menu utama" << endl;

      cout << "\nPilih Menu : ";
      cin >> pilih;

      switch (pilih) {
      case 1: // kubus
        kubus();
        break;
      // balok volume dan luas permukaan)
      case 2:
        balok();
        break;
      // prisma segitiga (volume dan luas permukaan)
      case 3:
        prisma();
        break;
      // tabung (volume dan luas permukaan)
      case 4:
        tabung();
        break;
      // bola (volume dan luas permukaan)
      case 5:
        bola();
        break;
      // exit
      case 6:
        goto menuUtama;
        break;
      default:
        cout << "Silakan pilih menu yang sesuai.";
        break;
      } // Luqmaan dan Raihan

    } while (kembali == 'Y' or kembali == 'y');
    break;
  case 3:
    menu3(); // Ekin dan Bintang
    break;
  case 4:
    menu4();
    cout << "\n Kembali ke menu utama? (y/n)";
    cin >> kembali;

    if (kembali == 'Y' or kembali == 'y') {
      goto menuUtama;
    }
    break;
  default:
    cout << "Silakan pilih menu yang sesuai.";
    break;
  }
  return 0;
}