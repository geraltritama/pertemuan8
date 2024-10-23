#include <iostream>

using namespace std;

struct zodiac {
    int hari;
    int bln;
    int thn;
};

string getZodiak(zodiac tgl) {
    if ((tgl.bln == 1 && tgl.hari >= 20) || (tgl.bln == 2 && tgl.hari <= 18)) {
        return "AQUARIUS";
    } else if ((tgl.bln == 2 && tgl.hari >= 19) || (tgl.bln == 3 && tgl.hari <= 20)) {
        return "PISCES";
    } else if ((tgl.bln == 3 && tgl.hari >= 21) || (tgl.bln == 4 && tgl.hari <= 19)) {
        return "ARIES";
    } else if ((tgl.bln == 4 && tgl.hari >= 20) || (tgl.bln == 5 && tgl.hari <= 20)) {
        return "TAURUS";
    } else if ((tgl.bln == 5 && tgl.hari >= 21) || (tgl.bln == 6 && tgl.hari <= 20)) {
        return "GEMINI";
    } else if ((tgl.bln == 6 && tgl.hari >= 21) || (tgl.bln == 7 && tgl.hari <= 22)) {
        return "CANCER";
    } else if ((tgl.bln == 7 && tgl.hari >= 23) || (tgl.bln == 8 && tgl.hari <= 22)) {
        return "LEO";
    } else if ((tgl.bln == 8 && tgl.hari >= 23) || (tgl.bln == 9 && tgl.hari <= 22)) {
        return "VIRGO";
    } else if ((tgl.bln == 9 && tgl.hari >= 23) || (tgl.bln == 10 && tgl.hari <= 22)) {
        return "LIBRA";
    } else if ((tgl.bln == 10 && tgl.hari >= 23) || (tgl.bln == 11 && tgl.hari <= 21)) {
        return "SCORPIO";
    } else if ((tgl.bln == 11 && tgl.hari >= 22) || (tgl.bln == 12 && tgl.hari <= 21)) {
        return "SAGITTARIUS";
    } else {
        return "CAPRICORN";
    }
}

int main() {
    zodiac tgl;


    cout << "Masukkan Tanggal lahir: ";
    cin >> tgl.hari;
    cout << "Masukkan Bulan lahir: ";
    cin >> tgl.bln;
    cout << "Masukkan Tahun lahir: ";
    cin >> tgl.thn;


    string zodiakHasil = getZodiak(tgl);
    cout << "Tanggal lahir anda [tgl-bln-thn]: " << tgl.hari << "-" << tgl.bln << "-" << tgl.thn << endl;
    cout << "Zodiak Anda adalah: " << zodiakHasil << endl;

    return 0;
}
