#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool bigger_than(int n) {
    return n>15;
}

int main(){
    
    vector<int> v1 = {3,3,12,14,17,25,30};
    vector<int> v2 = {2,3,12,14,24};

    // a)
    std::vector<int>::iterator val = std::find_if(v1.begin(), v1.end(), bigger_than);

    cout << *val.end() << endl;

    
    return 0;
}
