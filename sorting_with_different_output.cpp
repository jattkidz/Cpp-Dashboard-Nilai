#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> letters;
    vector<string> numbers;
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

        // Memisahkan huruf dan angka
        bool isLetter = true;
        for (char c : input) {
            if (!isalpha(c)) {
                isLetter = false;
                break;
            }
        }

        // Menambahkan input(menyimpan) ke vektor yang sesuai
        if (isLetter) {
            letters.push_back(input);
        } else {
            numbers.push_back(input);
        }
    }

    // Mengurutkan huruf dan angka
    sort(letters.begin(), letters.end());
    sort(numbers.begin(), numbers.end());

    // Menampilkan huruf yang telah diurutkan
    cout << "\nHuruf setelah diurutkan:\n";
    for (const auto& letter : letters) {
        cout << letter << "\n";
    }

    // Menampilkan angka yang telah diurutkan
    cout << "\nAngka setelah diurutkan:\n";
    for (const auto& number : numbers) {
        cout << number << "\n";
    }

    return 0;
}
