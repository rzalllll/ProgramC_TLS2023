#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "=======================" << endl;
    cout << "Selamat datang di YOGDI" << endl;
    cout << "=======================\n" << endl;

    cout << "SILAHKAN MAU PESAN APA: " << endl;
    
    vector<string> makan = {"Nasi Goreng", "Mie ayam", "Mie Goreng", "Nasi Ayam", "Nasi Telur"};
    vector<int> harga_mkn = {12000, 15000, 10000, 13000, 12000};

    vector<string> minum = {"Jeruk", "Tehhh", "Aquaa", "Kopii"};
    vector<int> harga_mnm = {3000, 3000, 5000, 4000};

    cout << "\nMenu Makanan: " << endl;
    for (int i = 0; i < makan.size(); i++) {
        cout << i + 1 << ". " << makan[i] << "\t Harga: Rp " << harga_mkn[i] << endl;
    }

    cout << "\nMenu Minuman :" << endl;
    for (int i = 0; i < minum.size(); i++) {
        cout << i + 1 << ". " << minum[i] << "\t Harga: Rp " << harga_mnm[i] << endl;
    }

    int total_harga = 0;
    vector<string> pesanan_makan;
    vector<string> pesanan_minum;

    while (true) {
        try {
            int pilihan;
            cout << "Masukkan nomor menu * MAKANAN * yang ingin anda pesan (0 untuk selesai): ";
            cin >> pilihan;
            if (pilihan == 0) {
                break;
            } else if (pilihan < 1 || pilihan > makan.size()) {
                cout << "Masukkan nomor menu yang valid." << endl;
            } else {
                int indeks_makan = pilihan - 1;
                pesanan_makan.push_back(makan[indeks_makan]);
                total_harga += harga_mkn[indeks_makan];
            }
        } catch (const exception&) {
            cout << "Masukkan nomor menu yang valid." << endl;
        }
    }
   cout << "\n";

    while (true) {
        try {
            int pilnum;
            cout << "Masukkan nomor menu * MINUMAN * yang ingin anda pesan (0 untuk selesai): ";
            cin >> pilnum;
            if (pilnum == 0) {
                break;
            } else if (pilnum < 1 || pilnum > minum.size()) {
                cout << "Masukkan nomor menu yang valid." << endl;
            } else {
                int indeks_minum = pilnum - 1;
                pesanan_minum.push_back(minum[indeks_minum]);
                total_harga += harga_mnm[indeks_minum];
            }
        } catch (const exception&) {
            cout << "Masukkan nomor menu yang valid." << endl;
        }
    }

    cout << "\n<Berikut pesanan anda>" << endl;
    cout << "MAKANAN: " << endl;
    for (const string& item : pesanan_makan) {
        cout << item << endl;
    }
    cout << "\nMINUMAN: " << endl;
    for (const string& item : pesanan_minum) {
        cout << item << endl;
    }
    cout << "Total harga: Rp " << total_harga << endl;

    int bayar;
    cout << "\nJangan lupa bayar ya bang: Rp ";
    cin >> bayar;

    int kembalian = bayar - total_harga;
    cout << "Kembalian anda adalah: Rp " << kembalian << endl;

    cout << "\nTERIMA KASIH TELAH MENGUNJUNGI YOGDI!!" << endl;
}