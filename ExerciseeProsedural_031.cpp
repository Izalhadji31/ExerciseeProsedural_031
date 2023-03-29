#include <iostream>
using namespace std;

int a[20];

double rerata(double a, double b) {
    return (a + b) / 2;
}

string statusasroni(double r, double n) {
    if (r >= 80 && n >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string statuslia(double r, double n) {
    if (r >= 70 && n >= 80) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

string statusjoko(double r, double n) {
    if (r >= 60 || n >= 60) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}

int main() {
    double nilaiMath, nilaiBing;


    cout << "Masukkan nilai Math : ";
    cin >> nilaiMath;
    cout << "Masukkan nilai Bing : ";
    cin >> nilaiBing;

    //rerata = (nilaiMath + nilaiBing)/2;

    //rata = rerata(nilaiMath, nilaiBing);
    //st = status(rerata(nilaiMath, nilaiBing);

    // if  (rata >= 70){
    //      status = "lulus";
    // }else{
    //      status = "gagal";
    // }

    cout << "Nilai rata-rata nya : " << rerata(nilaiMath, nilaiBing);
    cout << "\nStatus kelulusannya : " << statusasroni(rerata(nilaiMath, nilaiBing), nilaiMath);
    cout << "\nStatus kelulusannya : " << statusjoko(rerata(nilaiMath, nilaiBing), nilaiMath);
    cout << "\nStatus kelulusannya : " << statuslia(rerata(nilaiMath, nilaiBing), nilaiMath);

}