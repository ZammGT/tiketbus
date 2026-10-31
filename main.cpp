#include <iostream>
using namespace std;
void pesanTiket(string tujuan, int harga) {
    int jumlah, total;

    cout << "\nTujuan: " << tujuan << endl;
    cout << "Harga tiket: Rp" << harga << endl;

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "\n===== DETAIL PEMESANAN =====" << endl;
    cout << "Tujuan: " << tujuan << endl;
    cout << "Harga tiket: Rp" << harga << endl;
    cout << "Jumlah penumpang: " << jumlah << endl;
    cout << "Total pembayaran: Rp" << total << endl;
}

int main() {
    int pilihan;

    cout << "===== PEMESANAN TIKET BUS =====" << endl;
    cout << "1. Malang - Surabaya (Rp35000)" << endl;
    cout << "2. Malang - Pasuruan (Rp20000)" << endl;
    cout << "3. Malang - Jombang (Rp25000)" << endl;

    cout << "\nPilih tujuan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        pesanTiket("Malang - Surabaya", 35000);
    }
    else if (pilihan == 2) {
        pesanTiket("Malang - Pasuruan", 20000);
    }
    else if (pilihan == 3) {
        pesanTiket("Malang - Jombang", 25000);
    }
    else {
        cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
