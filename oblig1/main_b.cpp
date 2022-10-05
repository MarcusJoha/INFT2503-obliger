#include <iostream>
#include <fstream>
using namespace std;

// Method to read numbers from a file
void read_temperatures(double temperatures[], int length);

int main() {

    int length = 5;
    double tempratures[length];

    read_temperatures(tempratures, length);

    int low = 10, high = 20;
    int under = 0, between = 0, over = 0;
    double temp;

    for (int i = 0; i < length; i++) {

        temp = tempratures[i];
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

void read_temperatures(double temperatures[], int length) {
    const string filename = "numbers.dat";
    ifstream file;
    file.open(filename);
    if (!file.is_open()) {
        cerr<< "Could not open the file - " << filename <<endl;
        EXIT_FAILURE;
    }
    for (int i = 0; i < length; i++) {
        file >> temperatures[i];
    }

    file.close();
    EXIT_SUCCESS;
}
