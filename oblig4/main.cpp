#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<double> vec;

    // Legge til 5 tall in vector
    int i = 0;
    int num = 1;
    while (i < 5) {
        ++i;
        num += 2;
        vec.emplace_back(num);
    }

    // Printe ut front og back
    cout << vec.front() << " " << vec.back() << endl;

    // Legge til et tall etter første index
    vec.emplace(vec.begin() + 1, 4242);


    for (auto i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    auto it = std::find(vec.begin(), vec.end(), 7);

    cout << "it: " << *it << endl;

    if ( *it == 0) {
        cout << "Not found!" << endl;
    } else {
        cout << "Found: " << *it << endl;
    }

    return 0;
}
