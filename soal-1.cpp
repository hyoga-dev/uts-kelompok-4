#include <iostream>
using namespace std;

int main() {
    string nama; int gol, jamKerja, uangLembur = 0, perJam, total;

    cout << "Masukkan nama anda : "; cin >> nama;
    cout << "Masukkan golongan anda : "; cin >> gol;
    cout << "Masukkan jam kerja per minggu anda : "; cin >> jamKerja; 

    if (jamKerja > 48) uangLembur = (jamKerja - 48) * 10;
    switch (gol) {
        case 1: perJam = 25; break; 
        case 2: perJam = 35; break;
        case 3: perJam = 50; break;
    }
    total = jamKerja * perJam + uangLembur;
    
    cout << "\nTotal gaji " << nama << " per minggu : ";
    cout << "Rp. " << total << "000";
}
