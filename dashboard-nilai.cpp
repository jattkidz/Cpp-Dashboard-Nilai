#include <iostream>
#include <cstdlib> 
#include <iomanip>

using namespace std;

int main() {
    int mhs;
    char bnr = 'y';
    char loop;
    cout<<setfill('=')<<setw(37)<<"\n";
    cout << "WELCOME DASHBOARD NILAI MAHASISWA" << endl;
    cout<<setfill('=')<<setw(37)<<"\n";
    cout << "MOHON MASUKAN JUMLAH MAHASISWA: ";
    cin >> mhs;

    int nilai[mhs];
    for (int i = 0; i < mhs; i++) {
        cout << "Nilai Mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "Apakah data sudah benar (y/n) = ";
    cin >> bnr;

    if (bnr == 'y' || bnr == 'Y') {
        cout<<setfill('=')<<setw(30)<<"\n";
        cout << "[Daftar Nilai]" << endl;
        for (int i = 0; i < mhs; i++) {
            cout << "Nilai Mahasiswa #" << i + 1 << " : " << nilai[i] << endl;
        }
        cout<<setfill('=')<<setw(30)<<"\n";
    } else {
        do { 
            cout << "MOHON MASUKAN ULANG JUMLAH MAHASISWA: ";
            cin >> mhs;

            for (int i = 0; i < mhs; i++) {
                cout << "Nilai Mahasiswa ke-" << i + 1 << ": ";
                cin >> nilai[i];
            }
            
            cout << "Apakah data sudah benar (y/n) = ";
            cin >> bnr;
        } while (bnr == 'n' || bnr == 'N');

        cout<<setfill('=')<<setw(30)<<"\n";
        cout << "[Daftar Nilai]" << endl;
        for (int i = 0; i < mhs; i++) {
            cout << "Nilai Mahasiswa #" << i + 1 << " : " << nilai[i] << endl;
        }
        cout<<setfill('=')<<setw(30)<<"\n";
    } 

    int pill;
    do {
        cout << "\n MENU PILIHAN" << endl;
        cout << "[1] Predikat Nilai Mahasiswa" << endl;
        cout << "[2] Kelulusan Mahasiswa" << endl;
        cout << "[3] Data Nilai Mahasiswa" << endl;
        cout << "[4] Tambahan Data Nilai" << endl;
        cout << "[5] Keluar Program" << endl;
        cout << "Pilih menu: ";
        cin >> pill;

        if (pill == 1) {
            cout << "\n[PREDIKAT MAHASISWA]" << endl;
            for (int i = 0; i < mhs; i++) {
                cout << "Mahasiswa ke-" << i + 1 << ": ";
                if (nilai[i] >= 85 && nilai[i] <= 100)
                    cout << "A";
                else if (nilai[i] >= 80)
                    cout << "B+";
                else if (nilai[i] >= 75)
                    cout << "B";
                else if (nilai[i] >= 70)
                    cout << "C+";
                else if (nilai[i] >= 60)
                    cout << "C";
                else if (nilai[i] >= 50)
                    cout << "D";
                else
                    cout << "E";
                cout << endl;
            }
        } else if (pill == 2) {
            cout << "\n[KELULUSAN MAHASISWA]" << endl;
            for (int i = 0; i < mhs; i++) {
                cout << "Mahasiswa ke-" << i + 1 << ": ";
                if (nilai[i] >= 60)
                    cout << "Lulus!";
                else
                    cout << "Mengulang...";
                cout << endl;
            }
        } else if (pill == 3) {
            int c = nilai[0];
            int d = nilai[0];
            int total = 0;

            for (int i = 0; i < mhs; i++) {
                if (nilai[i] > c) {
                    c = nilai[i];
                }
                if (nilai[i] < d) {
                    d = nilai[i];
                }
                total += nilai[i];
            } 

            double ratarata = static_cast<double>(total) / mhs;

            cout << "\n[Data Nilai Terbesar, terkecil, dan Rata - Rata]" << endl;
            cout << "Nilai Terbesar: " << c << endl;
            cout << "Nilai Terkecil: " << d << endl;
            cout << "Rata-rata Nilai: " << ratarata << endl;
        } else if (pill == 4) {
    cout << "\n[TAMBAH DATA NILAI]\n";
    int tambahanMhs;
    cout << "Jumlah Mahasiswa Tambahan: ";
    cin >> tambahanMhs;
    
    int totalMhs = mhs + tambahanMhs;

    int nilaiTambahan[tambahanMhs];

    for (int i = mhs; i < totalMhs; i++) {
        cout << "Nilai Mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiTambahan[i - mhs];
    }

    for (int i = mhs; i < totalMhs; i++) {
        nilai[i] = nilaiTambahan[i - mhs];
    }

    mhs = totalMhs;

    cout << "Apakah data tambahan sudah benar (y/n) = ";
    cin >> bnr;

    if (bnr == 'y' || bnr == 'Y') {
        cout << "\n[Daftar Nilai Tambahan]" << endl;
        for (int i = mhs - tambahanMhs; i < totalMhs; i++) {
            cout << "Nilai Mahasiswa #" << i + 1 << " : " << nilai[i] << endl;
        }
    } else {
        do { 
            cout << "MOHON MASUKAN ULANG JUMLAH MAHASISWA TAMBALAN: ";
            cin >> tambahanMhs;
            totalMhs = mhs + tambahanMhs;

            for (int i = mhs; i < totalMhs; i++) {
                cout << "Nilai Mahasiswa ke-" << i + 1 << ": ";
                cin >> nilaiTambahan[i - mhs];
            }

            for (int i = mhs; i < totalMhs; i++) {
                nilai[i] = nilaiTambahan[i - mhs];
            }

            mhs = totalMhs;

            cout << "Apakah data tambahan sudah benar (y/n) = ";
            cin >> bnr;
        } while (bnr == 'n' || bnr == 'N');

        cout << "\n[Daftar Nilai Tambahan]" << endl;
        for (int i = mhs - tambahanMhs; i < totalMhs; i++) {
            cout << "Nilai Mahasiswa #" << i + 1 << " : " << nilai[i] << endl;
        }
    }
}
 else if (pill == 5) {
            cout << "TERIMAKASIH TELAH MENGGUNAKAN DAN MEMPERCAYAI PROGRAM YANG TELAH KAMI BUAT" << endl;
            exit(0);
        }

        cout << "Kembali (y/n): ";
        cin >> loop;

    } while (loop == 'y' || loop == 'Y');

    return 0;
}