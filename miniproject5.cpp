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

void menu()
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

int analisis1(int arr[]){
	for(int ac = 0; ac < 5; ac++ ){
        if(arr[ac] > terbesar);
		terbesar = arr[ac];
		}
	}
	return terbesar;
}

int analisis2(int mean[]){
    double rata = 0;
    for(int av = 0; av < 5; av++){
        rata += mean[av];
    }
    rata /= 5.0;

    if(rata >= 50000) cout << "Pengeluaran kamu termasuk boros!\n";
    else if(rata < 50000) cout << "Pengeluaran kamu termasuk aman, tetapi masih harus lebih berhati-hati!\n";
    else if(rata <= 30000) cout << "Pengeluaran kamu termasuk hemat, pertahankan!\n";

    return rata;
}

void analisis3(int masukan[]){
    double totalsemua = 0;
    for(int ab = 0; ab < 5; ab++){
        totalsemua += masukan[ab];
    }

    for(int as = 0; as < 5; as++){
        cout << "Persentase pengeluaran kamu untuk " << kategori[as] << " adalah " << ((masukan[as] / totalsemua) * 100) << " %" << endl;
    }

    cout << endl;

int main(){
    int choose;
    string opt;
    sapa();

    do
    {
        tampil();
        menu();
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
            if (totalpengeluaran < 0) {
                cout << "Pengeluaran tidak bisa negatif!\n";
            }
            else {
                cout << "Total pengeluaran kamu: Rp" << totalpengeluaran << endl;
            }
            break;
        }
    } while(opt == "y" || opt == "Y);
        
    return 5;
}
