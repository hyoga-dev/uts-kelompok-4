#include <iostream> 
using namespace std;

int main() {
	int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar, hargamobil = 5000, hargamotor = 2000, jam;

	cout << "Masukkan nilai motor : "; cin >> jumlahMotor;
	cout << "Masukkan nilai mobil : "; cin >> jumlahMobil;
	cout << "Input jam masuk (format 24 jam) : "; cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam) : "; cin >> jamKeluar;

	(jamMasuk < jamKeluar) ? jam = jamKeluar - jamMasuk : jam = 24 - (jamMasuk - jamKeluar);
	int total = (jumlahMotor * hargamotor * jam) + (jumlahMobil * hargamobil * jam);

	cout << "\nTotal biaya parkir : " << total << " (" << jam << " jam)";
}
