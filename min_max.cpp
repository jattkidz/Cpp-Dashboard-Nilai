#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Masukkan jumlah array: ";
    cin >> n;

    int max_val, min_val;

    cout << "Masukkan bilangan ke-1: ";
    cin >> max_val;
    min_val = max_val;

   
    for (int i = 1; i < n; ++i) {
        int num;
        cout << "Masukkan bilangan ke-" << i + 1 << ": ";
        cin >> num;
        
        if (num > max_val) {
            max_val = num;
        }
        
        if (num < min_val) {
            min_val = num;
        }
    }

    cout << "Nilai maksimal: " << max_val << endl;
    cout << "Nilai minimal: " << min_val << endl;

    return 0;
}