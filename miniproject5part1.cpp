#include <iostream>
using namespace std;

int pengeluaran[5] = {0};
int totalpengeluaran = 0;
int terbesar = 0;

string kategori[5] = {"Makan", "Bensin", "Jajan", "Sembako", "Lain-lain"};

void sapa()
{
    cout << "----------------------------------------------------------------------\n";
    cout << "-- Halo Mahasiswa! Selamat Datang di Aplikasi Manajemen Keuanganmu --\n";
    cout << "----------------------------------------------------------------------\n";
}

void daftar()
{
    cout << endl;
    cout << "1. Input Pengeluaran\n";
    cout << "2. Lihat Total\n";
    cout << "3. Lihat Analisis\n";
    cout << "4. Keluar\n";
}


void tampil(){
    cout << "Berikut kategori pengeluaranmu" << endl;
    for(int a = 0; a < 5; a++){
        cout << kategori[a] << " / ";
    }
}

int main(){
    sapa();
    daftar();
    tampil();

    return 5;
}