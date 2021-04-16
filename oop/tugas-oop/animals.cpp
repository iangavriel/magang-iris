#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
    string name;
    int age;
    void set_value(string x, int y) {
        name = x;
        age = y;
    }
};

class Zebra : public Animal {
    public:
    void message() {
        cout << "Hello! I'm " << name << ". I'm " << age << " years old. " << "My origin is from Africa. My skin has a black-white stripe pattern." << endl;
    }
};

class Dolphin : public Animal {
    public:
    void message() {
        cout << "Hello! I'm " << name << ". I'm " << age << " years old. " << "Even though I live in water, i swim to surface to breathe air. As a mammal, I give birth to baby dolphins." << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin lumba;
    zebra.set_value("Zebra", 20);
    lumba.set_value("Dolphin", 30);
    zebra.message();
    lumba.message();
}