#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " angka untuk array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    int pilihan;
    cout << "\n      MENU      \n";
    cout << "1. Cari nilai maksimum\n";
    cout << "2. Cari nilai minimum\n";
    cout << "3. Cari nilai rata-rata\n";
    cout << "Pilih operasi yang ingin dilakukan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        int maks = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > maks) {
                maks = arr[i];
            }
        }
        cout << "Nilai maksimum dari array adalah: " << maks << endl;
    }
    else if (pilihan == 2) {
        int min = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Nilai minimum dari array adalah: " << min << endl;
    }
    else if (pilihan == 3) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        double ratarata = static_cast<double>(sum) / n;
        cout << "Nilai rata-rata dari array adalah: " << ratarata << endl;
    }
    else {
        cout << "Pilihan tidak valid\n";
    }

    return 0;
}
