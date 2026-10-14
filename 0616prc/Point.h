#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point() {
        x = 0;
        y = 0;
        z = 0;
    }

    Point(double xVal, double yVal, double zVal) {
        x = xVal;
        y = yVal;
        z = zVal;
    }

    void Input() {
        cin >> x >> y >> z;
    }

    void Print() const {
        cout << x << " " << y << " " << z << endl;
    }

    double GetX() const { return x; }
    double GetY() const { return y; }
    double GetZ() const { return z; }

    void SetX(double xVal) { x = xVal; }
    void SetY(double yVal) { y = yVal; }
    void SetZ(double zVal) { z = zVal; }

    void SaveToFile(const string& filename) const {
        ofstream fout(filename);
        if (fout.is_open()) {
            fout << x << " " << y << " " << z << endl;
            fout.close();
        }
    }

    void LoadFromFile(const string& filename) {
        ifstream fin(filename);
        if (fin.is_open()) {
            fin >> x >> y >> z;
            fin.close();
        }
    }
};

#endif