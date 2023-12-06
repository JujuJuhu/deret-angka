// Baris Deret.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int jumlahDeret;

    // Meminta pengguna untuk memasukkan jumlah baris deret
    cout << "Masukkan Jumlah Deret: ";
    cin >> jumlahDeret;

    // Menampilkan deret
    for (int i = 1; i <= jumlahDeret; ++i) {
        // Menampilkan angka
        for (int j = 1; j <= jumlahDeret - i + 1; ++j) {
            cout << i;
            if (j < jumlahDeret - i + 1) {
                cout << "-";
            }
        }

        // Menampilkan tanda tambah di akhir setiap baris
        if (i < jumlahDeret) {
            cout << "+";
        }

        cout << endl;
    }

    return 0;
}

