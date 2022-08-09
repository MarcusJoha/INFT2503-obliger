//
// Created by Marcus Johannessen on 09/08/2022.
//

#include <iostream>

using namespace std;


const double pi = 3.141592;
const double sales_tax = 0.25;

class Circle {
public:
    Circle(const double &radius_, int hei);
    int get_area() const;
    double get_circumference() const;
    const double &get_radius() const;
    int &get_hei();
private:
    double radius;
    int hei;

};

Circle::Circle(const double &radius_, int hei_): radius(radius_), hei(hei_) {

}

int Circle::get_area() const {
    return pi * radius * radius;
}

double Circle::get_circumference() const {
    double circumference = 2.0 * pi * radius;
    return circumference;
}

const double &Circle::get_radius() const {
    return radius ;
}


int main() {

    Circle sirkel(3.5, 4);

    cout << sirkel.get_area() << endl;
    cout << sirkel.get_circumference() << endl;
    cout << sirkel.get_radius() << endl;

    return 0;
}