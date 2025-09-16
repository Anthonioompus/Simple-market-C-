#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
	string namaBarangInput;
	int jumlahInput;
	double hargaSatuan = 0.0;
	double totalHarga = 0.0;

	cout << "Selamat Datang di Warung AnthoRmx!" << endl;
	cout << "----------Selamat datang---------" << endl;
	cout << "Masukkan Nama Barang: ";
	getline(cin, namaBarangInput);

	cout << "Masukkan Jumlah     : ";
	cin >> jumlahInput;

	if (namaBarangInput == "Indomie Goreng") {
		hargaSatuan = 3000.0;
	}
	else if (namaBarangInput == "Kecap Bango") {
		hargaSatuan = 8500.0;
	}
	else if (namaBarangInput == "Teh Pucuk") {
		hargaSatuan = 3500.0;
	}
	else if (namaBarangInput == "Malboro") {
		hargaSatuan = 20500.0;
	}
	else if (namaBarangInput == "Indomilk") {
		hargaSatuan = 0;
	}

	cout << "\n--- Struk Belanja Anda---" << endl;

	if (hargaSatuan > 0) {
		totalHarga = hargaSatuan * jumlahInput;

		cout << "Nama Barang  : " << namaBarangInput << endl;
		cout << "Jumlah       : " << jumlahInput << " pcs" << endl;
		cout << "Harga Satuan : Rp " << hargaSatuan << endl;
		cout << "-------------------------" << endl;
		cout << "Total Harga  : Rp " << totalHarga << endl;
	} else {

		cout << "Maaf, barang '" << namaBarangInput << "' tidak ditemukan di sistem." << endl;
	}

	cout << "------Terima Kasih------" << endl;

	return 0;
}