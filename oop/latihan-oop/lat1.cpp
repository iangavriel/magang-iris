#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int x, y;
    public:
        void setX(int a) {
            x = a;
        }
        void setY(int b) {
            y = b;
        }
        int getArea() {
            return x * y;
        }
};

int main() {
    int a,b;
    cin >> a >> b;
    Rectangle segiempat;
    segiempat.setX(a);
    segiempat.setY(b);
    cout << segiempat.getArea();
    return 0;
}