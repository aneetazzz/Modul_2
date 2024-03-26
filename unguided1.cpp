#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10; // Ukuran array
    int arr[SIZE];

    // Meminta pengguna untuk memasukkan data
    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Menampilkan data array
    cout << "Data array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Menampilkan nomor genap
    cout << "Nomor genap: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    // Menampilkan nomor ganjil
    cout << "Nomor ganjil: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;

    return 0;
}
