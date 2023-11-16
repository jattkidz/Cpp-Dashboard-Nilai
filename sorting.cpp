#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> data;
    string input;

    // Meminta pengguna memasukkan data
    cout << "Masukkan data (ketik 'selesai' untuk mengakhiri):\n";
    while (true) {
        cout << "> ";
        cin >> input;

        // Mengakhiri jika pengguna memasukkan 'selesai'
        if (input == "selesai") {
            break;
        }

        // Menambahkan input ke vektor
        data.push_back(input);
    }

    // Mengurutkan data
    sort(data.begin(), data.end());

    // Menampilkan data yang telah diurutkan
    cout << "\nData setelah diurutkan:\n";
    for (const auto& item : data) {
        cout << item << "\n";
    }

    return 0;
}
