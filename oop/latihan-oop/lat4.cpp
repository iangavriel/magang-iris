#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real, imaginary;
    public:
        
        int getReal(int x, int y) {
            real = x + y;
            return real;
        }
        int getImaginary(int a, int b) {
            imaginary = a + b;
            return imaginary;
        }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    cout << "Masukkan dua bilangan complex (Hanya konstanta)" << endl;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    Complex kompleks;
    cout << "Hasil Penjumlahan: " << kompleks.getReal(real1, real2) << " + " << kompleks.getImaginary(imaginary1, imaginary2) << "i" << endl;
}