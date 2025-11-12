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

int inputpengeluaran(int keluar[]){
    for(int i = 0; i < 5; i++){
        totalpengeluaran += keluar[i];
    }
    return totalpengeluaran;
}

int main(){
    sapa();
    daftar();
    tampil();
    do
    {
        tampil();
        daftar();
        cout << "Masukkan pilihan anda (1-4): "; cin >> choose;

        switch (choose)
        {

        case 1:
            for (int i = 0; i < 5; i++)
            {
                cout << "Masukkan pengeluaran kamu hari ini dengan kategori " << kategori[i] << ": Rp";
                cin >> pengeluaran[i];
                if(pengeluaran[i] < 0){
                    break;
                }
            }
            totalpengeluaran = inputpengeluaran(pengeluaran);
            break;

        case 2:
            if (totalpengeluaran < 0)
            {
                cout << "Pengeluaran tidak bisa negatif!\n";
            }
            else
            {
                cout << "Total pengeluaran kamu: Rp" << totalpengeluaran << endl;
            }
            break;

    return 5;

}

