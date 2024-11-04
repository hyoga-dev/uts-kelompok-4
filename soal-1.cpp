#include <iostream>
using namespace std;

int hitungGaji(int gol, int jamKerja) {
    int uangLembur = 0, perJam;

    if (jamKerja > 48) uangLembur = (jamKerja - 48) * 10;
    
    switch (gol) {
        case 1: perJam = 25; break; 
        case 2: perJam = 35; break;
        case 3: perJam = 50; break;
        default:  return -1;
    }

    return jamKerja * perJam + uangLembur;
}

int main() {
    string nama; int gol, jamKerja;

    cout << "Masukkan nama anda : "; cin >> nama;
    cout << "Masukkan golongan anda : "; cin >> gol;
    cout << "Masukkan jam kerja per minggu anda : "; cin >> jamKerja;  
    cout << endl;

    if (hitungGaji(gol, jamKerja) == -1) {
        cout << "Error: nilai golongan tidak boleh kurang dari 1 dan tidak boleh lebih dari 3";
        return 0;
    }
    
    cout << "Total gaji " << nama << " per minggu : ";
    cout << "Rp. " << hitungGaji(gol, jamKerja) << "000";
}
