#include <iostream>
using namespace std;

int main() {

    const int length = 5;
    int low = 10, high = 20;
    int under = 0, between = 0, over = 0;
    double temp;

    cout<<"Du skal skrive inn " + to_string(length) + " tempraturer"<<endl;
    for (int i = 0; i < length; i++) {
        cout<<"Tempratur nr " + to_string(i + 1) + ": ";
        cin >> temp;
        if (temp < low ) {
            under++;
        }
        else if (temp > high) {
            over++;
        }
        else {
            between++;
        }
    }

    cout<<"Antall under " + to_string(low) + " er: " + to_string(under)<<endl;
    cout<<"Antall mellom " + to_string(low) + " og " + to_string(high) +  " er: " + to_string(between)<<endl;
    cout<<"Antall over " + to_string(high) + " er: " + to_string(over)<<endl;

    return 0;
}
