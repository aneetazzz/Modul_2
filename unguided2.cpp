#include <iostream>

using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array tiga dimensi
    cout << "Masukkan ukuran array tiga dimensi:\n";
    cout << "Ukuran dimensi x: ";
    cin >> x_size;
    cout << "Ukuran dimensi y: ";
    cin >> y_size;
    cout << "Ukuran dimensi z: ";
    cin >> z_size;

    // Membuat array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int arr[x_size][y_size][z_size];

    // Meminta pengguna untuk memasukkan data ke dalam array
    cout << "Masukkan " << x_size * y_size * z_size << " angka untuk array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Array[" << x << "][" << y << "][" << z << "]: ";
                cin >> arr[x][y][z];
            }
        }
    }

    // Menampilkan data array yang dimasukkan oleh pengguna
    cout << "\nData array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Array[" << x << "][" << y << "][" << z << "]: " << arr[x][y][z] << endl;
            }
        }
    }

    // Menampilkan data array dalam satu baris
    cout << endl;
    for (int x = 0; x < x_size; x++)
     {
        for (int y = 0; y < y_size; y++)
         {
            for (int z = 0; z < z_size; z++) 
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
