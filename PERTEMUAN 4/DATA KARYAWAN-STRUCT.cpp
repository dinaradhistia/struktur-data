#include <iostream>
using namespace std;

struct Tanggal{
	string hari;
	string bulan;
	int tahun;
};

struct Alamat{
	string jalan;
	string kota;
};

struct Karyawan{
	string nama;
	double gaji;
	struct Tanggal masuk;
	struct Alamat tinggal;
};

int main(){
	
//	Karyawan k1;
//	k1.nama = "Dita";
//	k1.masuk.hari = "07";
//	k1.masuk.bulan = "Maret";
//	k1.masuk.tahun = 2026;
//	k1.tinggal.jalan = "Ciranjang";
//	k1.tinggal.kota = "Cianjur";
//	k1.gaji = 10000;
//	
//	cout << "Nama Karyawan: " << k1.nama << endl;
//	cout << "Tanggal Masuk: " << k1.masuk.hari << " " << k1.masuk.bulan << " " << k1.masuk.tahun << endl;
//	cout << "Alamat: " << k1.tinggal.jalan << ", " << k1.tinggal.kota << endl;
//	cout << "Gaji Perbulan: " << k1.gaji << endl;

	Karyawan k[2];
	cout << "Input Data Karyawan!\n";
	cout << endl;
	
	for(int i=0; i<2; i++){
		cout << "Karyawan ke-" << i + 1 << endl;
		cout << "Nama Karyawan: ";
		cin >> k[i].nama;
		
		cout << "Hari Masuk: ";
		cin >> k[i].masuk.hari;
		
		cout << "Bulan Masuk: ";
		cin >> k[i].masuk.bulan;
		
		cout << "Tahun Masuk: ";
		cin >> k[i].masuk.tahun;
		
		cout << "Jalan Tinggal: ";
		cin >> k[i].tinggal.jalan;
		
		cout << "Kota Tinggal: ";
		cin >> k[i].tinggal.kota;
		
		cout << "Gaji Perbulan: ";
		cin >> k[i].gaji;
		cout << endl;
	}
	cout << endl;
	
	cout << "--------------------------------------\n";
	cout << "Data Karyawan\n";
	for(int i=0; i<2; i++){
		cout << "Karyawan ke-" << i + 1 << endl;
		cout << "Nama Karyawan: " << k[i].nama << endl;
		cout << "Tanggal Masuk: " << k[i].masuk.hari << " " << k[i].masuk.bulan << " " << k[i].masuk.tahun << endl;
		cout << "Alamat: " << k[i].tinggal.jalan << ", " << k[i].tinggal.kota << endl;
		cout << "Gaji Perbulan: " << k[i].gaji << endl;
		cout << endl;
	}
	
	cin.get();
	return 0;
}
