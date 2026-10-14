#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p;
    p.Input();
    p.Print();
    p.SaveToFile("point.txt");

    Point p2;
    p2.LoadFromFile("point.txt");
    p2.Print();

    return 0;
}