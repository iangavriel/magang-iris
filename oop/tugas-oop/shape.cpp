#include <bits/stdc++.h>
using namespace std;

class Shape { 
    public:
        double width, height;
        Shape(double x, double y) { //constructor untuk set initial value
            width = x;
            height = y;
        }
};

class Triangle: public Shape {
    public:
        using Shape::Shape; //untuk inherit constructor
        double area() {
            return (0.5 * width * height);
        }
};

class Rectangle: public Shape {
    public:
        using Shape::Shape;
        double area() {
            return (width * height);
        }
};

int main() {
    double triangle, rectangle, width, height;
    cin >> width >> height;
    Triangle segitiga(width, height); //karena constructor shape di-inherit, gausah pake shape()
    triangle = segitiga.area();
    Rectangle segiempat(width, height);
    rectangle = segiempat.area();
    cout << "Luas Segitiga: " << triangle << endl;
    cout << "Luas Segiempat: " << rectangle << endl;
}