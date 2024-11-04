#include <iostream> 
using namespace std;

void biayaParkir(int jumlahMotor, int jumlahMobil, int jamMasuk, int jamKeluar) {
	int mobil = 5000, motor = 2000, jam;

	(jamMasuk < jamKeluar) ? jam = jamKeluar - jamMasuk : jam = 24 - (jamMasuk - jamKeluar);
	
	int total = (jumlahMotor * motor * jam) + (jumlahMobil * mobil * jam);

	cout << "\nTotal biaya parkir : " << total;
	cout << " (" << jam << " jam)";
}

int main() {
	int motor, mobil, masuk, keluar;

	cout << "Masukkan nilai motor : "; cin >> motor;
	cout << "Masukkan nilai mobil : "; cin >> mobil;
	cout << "Input jam masuk (format 24 jam) : "; cin >> masuk;
	cout << "Input jam keluar (format 24 jam) : "; cin >> keluar;
	
	biayaParkir(motor, mobil, masuk, keluar);
}
