#include <bits/stdc++.h>
using namespace std;

class Mother {
    public:
    void display() {
        cout << "I'm your Mother!" << endl;
    }
};

class Daughter : public Mother {
    public:
    void display() {
        cout << "I'm your Daughter" << endl;
    }
};

int main() {
    Daughter anak;
    anak.display();
}