#include <iostream> 
using namespace std;

int main() {
	int motor, mobil, masuk, keluar, hargamobil = 5000, hargamotor = 2000, jam;

	cout << "Masukkan nilai motor : "; cin >> motor;
	cout << "Masukkan nilai mobil : "; cin >> mobil;
	cout << "Input jam masuk (format 24 jam) : "; cin >> masuk;
	cout << "Input jam keluar (format 24 jam) : "; cin >> keluar;

	(jamMasuk < jamKeluar) ? jam = jamKeluar - jamMasuk : jam = 24 - (jamMasuk - jamKeluar);
	int total = (jumlahMotor * hargamotor * jam) + (jumlahMobil * hargamobil * jam);

	cout << "\nTotal biaya parkir : " << total << " (" << jam << " jam)";
}
