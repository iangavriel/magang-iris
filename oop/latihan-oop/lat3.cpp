#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int marks1, marks2;
    Student(string x, int a, int b) { //constructor buat mendapatkan nilai2.
        name = x;
        marks1 = a;
        marks2 = b;
    }
    int calc_media() {
        return marks1 + marks2;
    }
    void disp() {
        cout << "This is your result" << endl;
        cout << name << endl;
        cout << calc_media();
    }
};

int main() {
    int m1, m2;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << endl << "Enter your marks: ";
    cin >> m1 >> m2;
    Student murid(name, m1, m2); //passing value ke class
    murid.calc_media();
    murid.disp();
}