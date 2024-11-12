#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distanceByValue(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void distanceByReference(const Point &p1, const Point &p2, double &distance) {
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void distanceByAddress(Point *p1, Point *p2, double *distance) {
    *distance = sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}

int main() {
    Point p1, p2;


    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> p1.x >> p1.y;
    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> p2.x >> p2.y;

    double distance1 = distanceByValue(p1, p2);
    cout << "Distance (call by value): " << distance1 << endl;


    double distance2;
    distanceByReference(p1, p2, distance2);
    cout << "Distance (call by reference): " << distance2 << endl;


    double distance3;
    distanceByAddress(&p1, &p2, &distance3);
    cout << "Distance (call by address): " << distance3 << endl;

    return 0;
}
