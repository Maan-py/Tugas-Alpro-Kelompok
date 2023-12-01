#include <iostream>
using namespace std;
// const int MAX_ROW = 100, MAX_COL = 100;

// Sementara pakai variabel global dlu, kalo ada yg ngerti pass by pointer atau
// pass by reference boleh diganti. Kata bu wilis harus pakai itu soalnya 😅😅😅
int pilih;
char kembali;

void persegiPanjang() {
  float p, l;

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

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void persegi() {
  float p;

  cout << "Persegi" << endl;
  cout << "\n";
  cout << "Masukkan Sisi : ";
  cin >> p;
  cout << "---------------------";
  cout << "\n";
  cout << "Luas :" << p * p << endl;
  cout << "keliling :" << p * 4 << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void segitiga() {
  float p, l, ps;
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
  } else {
    cout << "Menu tidak ditemukan" << endl;
  }

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void lingkaran() {
  float r;
  float PHI = 3.14;
  cout << "Lingkaran" << endl;
  cout << "\n";
  cout << "Masukkan Jari-Jari : ";
  cin >> r;
  cout << "---------------------";
  cout << "\n";
  cout << "Luas :" << PHI * r * r << endl;
  cout << "keliling :" << PHI * 2 * r << endl;

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void jajarGenjang() {
  float p, l;
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

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void belahKetupat() {
  float p, l, ps;

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

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

void trapesium() {
  float p, l, ps, p1, p2;

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

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
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

// Akhir dari fungsi/prosedure menu 2

// Fungsi/prosedure menu 3

//perkalian matriks
void perkalianMatriks() {
  int a, b, c, d;

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");
  cout << "Perkalian 2 matriks (M * N)\n";
  cout << endl;

  cout << "Matriks M dengan ukuran a * b" << endl;
  cout << "Input nilai a: ";
  cin >> a;

  cout << "Input nilai b: ";
  cin >> b;

  int m[a][b];

  cout << endl;

  cout << "Matriks N dengan ukuran c * d" << endl;
  cout << "Input nilai c: ";
  cin >> c;

  cout << "Input nilai d: ";
  cin >> d;

  int n[c][d];

  cout << endl;

  if (a * b == c * d) {
    cout << "Input Matriks M" << endl;
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        cout << "Angka [" << i << "] [" << j << "] : ";
        cin >> m[i][j];
      }
    }

    cout << endl;

    cout << "Input Matriks N" << endl;
    for (int i = 0; i < c; i++) {
      for (int j = 0; j < d; j++) {
        cout << "Angka [" << i << "] [" << j << "] : ";
        cin >> n[i][j];
      }
    }

    cout << endl;

    cout << "Hasil Matriks M" << endl;
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        cout << m[i][j] << " ";
      }
      cout << endl;
    }

    cout << endl;

    cout << "Hasil Matriks N" << endl;
    for (int i = 0; i < c; i++) {
      for (int j = 0; j < d; j++) {
        cout << n[i][j] << " ";
      }
      cout << endl;
    }

    cout << endl;

    cout << "Hasil Perkalian Matriks M dan N" << endl;
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < d; j++) {
        int hasil = 0;
        for (int k = 0; k < b; k++) {
          hasil += m[i][k] * n[k][j];
        }
        cout << hasil << " ";
      }
      cout << endl;
    }
  } else {
    cout << "Perkalian matriks tidak mungkin dilakukan!" << endl;
  }

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

//penjumlahan matriks
void penjumlahanMatriks() {
  int a, b, c, d;
  int matriks1[10][10], matriks2[10][10], penjumlahan[10][10];

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");
  cout << "Penjumlahan 2 Matriks\n\n";

  //input ukuran matriks
  cout << "\nMatriks 1 dengan ukuran a * b" << endl;
  cout << "Input nilai a : "; cin >> a;
  cout << "Input nilai b : "; cin >> b;
  cout << endl;
  cout << "Matriks 2 dengan ukuran c * d" << endl;
  cout << "Input nilai c : "; cin >> c;
  cout << "Input nilai d : "; cin >> d;

  if (a==c && b==d) {
    //input nilai matriks
    cout << "\ninput matriks 1" << endl;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        cout << "matriks 1 ["<<i<<"]["<<j<<"] : ";
        cin >> matriks1 [i][j];
      }
    }
    cout << endl << "input matriks 2" << endl;
    for(int k=0; k<c; k++) {
      for(int l=0; l<d; l++) {
        cout << "matriks 2 ["<<k<<"]["<<l<<"] : ";
        cin >> matriks2 [k][l];
      }
    }

    //hasil inputan matriks
    cout << endl << "hasil matriks 1" << endl;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        cout << matriks1[i][j]<<" ";
      }
      cout << endl;
    }
    cout << endl << "hasil matriks 2" << endl;
    for(int k=0; k<c; k++) {
      for(int l=0; l<d; l++) {
        cout << matriks2[k][l]<<" ";
      }
      cout << endl;
    }

    //Penjumlahan matriks
      for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
          penjumlahan[i][j] = matriks1[i][j] + matriks2[i][j];
        }
      }

    //hasil Penjumlahan matriks
    cout << "\nHasil Penjumlahan Matriks:\n";
    for (int i=0; i < b; i++) {
      for (int j=0; j < a; j++) {
        cout << penjumlahan[i][j] << " ";
      }
      cout << "\n";
    }
  } else {
    cout << "\nPenjumlahan matriks tidak dapat dilakukan!\n";
  }

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

//pengurangan matriks
void penguranganMatriks() {
  int a, b, c, d;
  int matriks1[10][10], matriks2[10][10], pengurangan[10][10];

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");
  cout << "Pengurangan 2 Matriks\n\n";

  //input ukuran matriks
  cout << "\nMatriks 1 dengan ukuran a * b" << endl;
  cout << "Input nilai a : "; cin >> a;
  cout << "Input nilai b : "; cin >> b;
  cout << endl;
  cout << "Matriks 2 dengan ukuran c * d" << endl;
  cout << "Input nilai c : "; cin >> c;
  cout << "Input nilai d : "; cin >> d;

  if (a==c && b==d) {
    //input nilai matriks
    cout << "\ninput matriks 1" << endl;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        cout << "matriks 1 ["<<i<<"]["<<j<<"] : ";
        cin >> matriks1 [i][j];
      }
    }
    cout << endl << "input matriks 2" << endl;
    for(int k=0; k<c; k++) {
      for(int l=0; l<d; l++) {
        cout << "matriks 2 ["<<k<<"]["<<l<<"] : ";
        cin >> matriks2 [k][l];
      }
    }

    //hasil inputan matriks
    cout << endl << "hasil matriks 1" << endl;
    for(int i=0; i<a; i++) {
      for(int j=0; j<b; j++) {
        cout << matriks1[i][j]<<" ";
      }
      cout << endl;
    }
    cout << endl << "hasil matriks 2" << endl;
    for(int k=0; k<c; k++) {
      for(int l=0; l<d; l++) {
        cout << matriks2[k][l]<<" ";
      }
      cout << endl;
    }

    //Pengurangan matriks
      for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
          pengurangan[i][j] = matriks1[i][j] - matriks2[i][j];
        }
      }

    //hasil Pengurangan matriks
    cout << "\nHasil Pengurangan Matriks:\n";
    for (int i=0; i < b; i++) {
      for (int j=0; j < a; j++) {
        cout << pengurangan[i][j] << " ";
      }
      cout << "\n";
    }
  } else {
    cout << "\nPengurangan matriks tidak dapat dilakukan!\n";
  }

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
}

//transpose matriks
void transposeMatriks() {
  int a, b;
  int matriks[10][10], transpose[10][10];

  cout << "\033[0;0H\033[2J"; // alternatif system("cls");
  cout << "Transpose Matriks\n\n";
  
  //input ukuran matriks
  cout << "Matriks dengan ukuran a * b" << endl;
  cout << "Input nilai a : "; cin >> a;
  cout << "Input nilai b : "; cin >> b;

  //input nilai matriks
  cout << "\ninput matriks" << endl;
  for(int i=0; i<a; i++) {
    for(int j=0; j<b; j++) {
      cout << "matriks ["<<i<<"]["<<j<<"] : ";
      cin >> matriks[i][j];
    }
  }

  //hasil inputan matriks
  cout << endl << "hasil matriks" << endl;
  for(int i=0; i<a; i++) {
    for(int j=0; j<b; j++) {
      cout << matriks[i][j]<<" ";
    }
    cout << endl;
  }

  //transpose matriks
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      transpose[j][i] = matriks[i][j];
    }
  }

  //hasil transpose matriks
  cout << "\nHasil Transpose Matriks:\n";
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < a; j++) {
      cout << transpose[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\nKembali ke menu sebelumnya? (y/n) : ";
  cin >> kembali;
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
    do {
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
        persegiPanjang();
        break;
      case 2:
        persegi();
        break;
      case 3:
        segitiga();
        break;
      case 4:
        lingkaran();
        break;
      case 5:
        jajarGenjang();
        break;
      case 6:
        belahKetupat();
        break;
      case 7:
        trapesium();
        break;
      case 8:
        // balik (how?)
        goto menuUtama;
      default:
        cout << "Menu tidak ditemukan" << endl;
      }

    } while (kembali == 'Y' or kembali == 'y'); // Verrel
    break;
  case 2:
    do {
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Selamat datang di menu 2!\n" << endl;

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
    do {
      cout << "\033[0;0H\033[2J"; // alternatif system("cls");

      cout << "Selamat datang di menu 3!\n" << endl;

      cout << "1. Perkalian matriks" << endl;
      cout << "2. Penjumlahan matriks" << endl;
      cout << "3. Pengurangan matriks" << endl;
      cout << "4. Transpose matriks" << endl;
      cout << "5. Kembali ke menu utama" << endl;

      cout << "\nPilih Menu : ";
      cin >> pilih;

      switch (pilih) {
      case 1:
        perkalianMatriks();
        break;
      case 2:
        penjumlahanMatriks();
        break;
      case 3:
        penguranganMatriks();
        break;
      case 4:
        transposeMatriks();
        break;
      case 5:
        goto menuUtama;
        break;
      default:
        cout << "Silakan pilih menu yang sesuai.";
        break;
      }

    } while (kembali == 'Y' or kembali == 'y');
    // Ekin dan Bintang
    break;
  case 4:
    menu4();
    cout << "\nKembali ke menu utama? (y/n) ";
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