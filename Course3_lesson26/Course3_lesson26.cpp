using namespace std;
#include <iostream>
#include <vector>
#include <string>

class point {
    int x;
    int y;
public:
    point(int x, int y) : x(x), y(y) {}
    void print() {
        cout << x << " " << y << endl;
    }
};

class figure {
public:
    point p1;
    point p2;
    point p3;
    point p4;
    figure(point p1, point p2, point p3, point p4) : p1(p1), p2(p2), p3(p3), p4(p4) {}
    virtual void print() = 0; 
    virtual ~figure() {}     
};

class square : public figure {
public:
    square(point p1, point p2, point p3, point p4) : figure(p1, p2, p3, p4) {}
    void print() override {
        cout << "Square: " << endl;
        p1.print();
        p2.print();
        p3.print();
        p4.print();
    }
};

class circle : public figure {
public:
    circle(point p1, point p2, point p3, point p4) : figure(p1, p2, p3, p4) {}
    void print() override {
        cout << "Circle: THIS IS A CIRCLE, POINTS ARE NOT RELEVANT!" << endl;
    }
};

class parallelogram : public figure {
public:
    parallelogram(point p1, point p2, point p3, point p4) : figure(p1, p2, p3, p4) {}
    void print() override {
        cout << "Parallelogram: " << endl;
        p1.print();
        p2.print();
        p3.print();
        p4.print();
    }
};

int main()
{
    vector<figure*> figures;


    figures.push_back(new square({ 1, 1 }, { 1, 4 }, { 4, 4 }, { 4, 1 }));
    figures.push_back(new circle({ 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }));
    figures.push_back(new parallelogram({ 2, 3 }, { 6, 3 }, { 5, 5 }, { 1, 5 }));

    for (figure* f : figures) {
        f->print();
        cout << endl;
    }

    for (figure* f : figures) {
        delete f;
    }

    return 0;
}
