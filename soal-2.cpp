#include <iostream> 
using namespace std;

int main() {
	// pembuatan variable
	int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar, hargamobil = 5000, hargamotor = 2000, jam;
        // input
	cout << "Masukkan nilai motor : "; cin >> jumlahMotor;
	cout << "Masukkan nilai mobil : "; cin >> jumlahMobil;
	cout << "Input jam masuk (format 24 jam) : "; cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam) : "; cin >> jamKeluar;
        // logika
	(jamMasuk < jamKeluar) ? jam = jamKeluar - jamMasuk : jam = 24 - (jamMasuk - jamKeluar);
	int total = (jumlahMotor * hargamotor * jam) + (jumlahMobil * hargamobil * jam);
        // output
	cout << "\nTotal biaya parkir : " << total << " (" << jam << " jam)";
}
