#include <iostream>
using namespace std;

int main() {
    string kandidat[3] = {"Kandidat A", "Kandidat B", "Kandidat C"};
    int suara[3] = {0, 0, 0};
    int pilihan, jumlahPemilih;

    cout << "===== SISTEM VOTING SEDERHANA =====\n";
    cout << "Masukkan jumlah pemilih: ";
    cin >> jumlahPemilih;

    for (int i = 1; i <= jumlahPemilih; i++) {
        cout << "\nPemilih ke-" << i << endl;
        cout << "1. " << kandidat[0] << endl;
        cout << "2. " << kandidat[1] << endl;
        cout << "3. " << kandidat[2] << endl;
        cout << "Pilih kandidat (1-3): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 3) {
            suara[pilihan - 1]++;
        } else {
            cout << "Pilihan tidak valid, suara tidak dihitung.\n";
        }
    }

    cout << "\n===== HASIL VOTING =====\n";
    for (int i = 0; i < 3; i++) {
        cout << kandidat[i] << " : " << suara[i] << " suara\n";
    }

    return 0;
}
