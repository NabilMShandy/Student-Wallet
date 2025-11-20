#include <iostream>
#include <windows.h>
using namespace std;

// Variabel global
int pengeluaran[5] = {0};
int totalpengeluaran = 0;

// Kategori pengeluaran
string kategori[5] = {"Makan", "Bensin", "Jajan", "Sembako", "Lain-lain"};

// Void function untuk menampilkan teks sapa
void sapa()
{
    // Mengakses emoji
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     cout << "=========================================================================\n";
    cout << "---------------------------- 😀😀😀 -----------------------------------\n";
    cout << "------------------------- Student Wallet -------------------------------\n";
    cout << "------------ Selamat Datang di Aplikasi Manajemen Keuanganmu ------------\n";
    cout << "---------------------------- 😀😀😀 -----------------------------------\n";
    cout << "=========================================================================\n";
}

// Void function untuk menampilkan teks menu
void menu()
{
    cout << endl;
    cout << "1. Input Pengeluaran\n";
    cout << "2. Lihat Total\n";
    cout << "3. Lihat Analisis\n";
    cout << "4. Keluar\n";
}

// Void function untuk menampilkan teks kategori
void tampil(){
    cout << "Berikut kategori pengeluaranmu" << endl;
    for(int a = 0; a < 5; a++){
        cout << kategori[a] << " / ";
    }
}

// Fungsi untuk menerima input pengeluaran dan mendapatkan total penjumlahan
int inputpengeluaran(int keluar[]){
    for(int ax = 0; ax < 5; ax++){
		if (keluar[ax] >= 0){
        totalpengeluaran += keluar[ax];
		exit(0);
    } else {
			cout << "\n input pengeluaran tidak valid! \n\n";
		}
	}
    return totalpengeluaran;
}

// Analisis 1 untuk mencari pengeluaran terbesar
int analisis1(int arr[]){
	int terbesar = 0;
	for(int ac = 0; ac < 5; ac++ ){
        if(arr[ac] > terbesar);{
		terbesar = arr[ac];
		}
	}
	return terbesar;
}

// Fungsi analisis2 untuk menghitung rata-rata pengeluaran user dan berisi percabangan untuk menganalisis pengeluaran
int analisis2(int mean[]){
    double rata = 0;
	
	 // Hitung total
    for(int av = 0; av < 5; av++){
        rata += mean[av];
    }

	// Hitung total pengeluaran lalu cek percabangan
   if(rata >= 50000){
        cout << "Pengeluaran kamu termasuk boros! 😥😥😥\n";
    }
    else if(rata >= 25000 && rata < 50000){
        cout << "Pengeluaran kamu termasuk aman, tetapi masih harus lebih berhati-hati! 😐😐😐 \n"; 
    }
    else if(rata < 25000){
        cout << "Pengeluaran kamu termasuk hemat, pertahankan! 😁😁😁\n";
    }
	
    return rata /= 5.0;
}

// Fungsi analisis3 untuk menbcari persentase
void analisis3(int masukan[]){
	double totalsemua = 0;
	
	// Hitung total
	for(int ab = 0; ab < 5; ab++){
		totalsemua += masukan[ab];
	}

	// Hitung persentase
	for(int as = 0; as < 5; as++){
		cout << "Persentase pengeluaran kamu untuk " << kategori[as] << " adalah " << ((masukan[as] / totalsemua) * 100) << " %" << endl;
	}

	cout << endl;

    // Percabangan untuk mengecek kondisi dan mengeluarkan peringatan ke user tentang pengeluarannya
    if(masukan[0] >= 30000){
        cout << "Pengeluaran untuk kebutuhan makan sudah terlalu besar, yakni sebesar Rp" << masukan[0] << ", kamu harus lebih hemat! 😯" << endl;
    }

    if(masukan[1] >= 50000){
        cout << "Pengeluaran untuk kebutuhan bensin sudah terlalu besar, yakni Rp" << masukan[1] << " ayo lebih berhemat! 😯" << endl;
    }

    if(masukan[2] >= 20000){
        cout << "Pengeluaran untuk kebutuhan jajan sudah terlalu besar, yakni Rp" << masukan[2] << " kamu harus mengurangi jajanmu! 😯" << endl;
    }

    if(masukan[3] >= 75000){
        cout << "Pengeluaran untuk kebutuhan sembako sudah terlalu besar, yakni Rp" << masukan[3] << " kamu harus berhati-hati! 😯" << endl;
    }

    if(masukan[4] >= 40000){
        cout << "Pengeluaran untuk kebutuhan lain-lain sudah mencapai berlebihan, yakni sebesar Rp" << masukan[4] << " berhematlah! 😯" << endl << endl;
    }
}

// Fungsi utama dimana kode akan dieksekusi
int main(){
    int choose;
    sapa();

	// Do while supaya menjalankan program sebelum looping berjalan
    do
    {
		// Memanggil void function diatas
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
                cout << "Total pengeluaran kamu: Rp" << totalpengeluaran << endl;
            break;
			
		case 3:
            cout << "Pengeluaran terbesar kamu hari ini adalah: Rp" << analisis1(pengeluaran) << endl;
            cout << "Pengeluaran rata-rata kamu hari ini: Rp" << analisis2(pengeluaran) << endl << endl;
            analisis3(pengeluaran);
            break;
			
		case 4:
			break;
			
		default:
			cout << "Input tidak valid!";
			break;
        }
    } while(choose != 4);

	cout << "Terima kasih telah menggunakan! \n\n"; 
	
    return 5;
}


