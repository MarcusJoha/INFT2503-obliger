#include <iostream>
#include <cmath>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "equal type called" << endl;
    return a == b;
}

bool equal(double a, double b) {
    double equal = abs(a-b) < 0.00001;
    cout << "equal double called " << endl;
    return equal;
}


template <typename type1, typename type2>
class Pair {
    public:
        type1 first;
        type2 second;

        Pair(type1 first_, type2 second_): first(first_), second(second_) {}

        Pair operator+(const Pair &pair) const {
            return Pair(first+pair.first, second+pair.second);
        }

        bool operator>(const Pair &pair) const {
            return static_cast<type1>(second) + first > pair.second + static_cast<type1>(pair.first);
        }

};




int main() {

    // Oppg 1
    bool test = equal("Marcus","Marcus");
    bool test1 = equal(3,5);
    cout <<"Marcus = Marcus: "<< test << ", 3 = 5:  " << test1 << endl;

    bool test2 = equal(2.000001, 2.00000); // returns 1
    cout <<"2.000001 = 2.00000: "<< test2 << endl;

    Pair<double, int> pair1(3.5, 14);
    Pair<double, int> pair2(2.1, 7);

    auto sum = pair1 + pair2;

    cout << "Sum: " << sum.first << ", " << sum.second << endl;

    if (pair1>pair2) {
        cout << "pair1 er størst" << endl;
    } else {
        cout << "pair2 er størst" << endl;
    }

    return 0;
}
