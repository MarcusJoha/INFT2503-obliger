#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    vector<int> v1 = {3,3,12,14,17,25,30};
    vector<int> v2 = {2,3,12,14,24};

    // a)
    auto val = std::find_if(v1.begin(), v1.end(), [](auto &n){return n > 15;});
    cout << *val << endl;

    // b)
    auto eq = equal(v1.begin(), v1.begin()+5, v2.begin(), [](int &x, int &y){return abs(x-y) < 2;});
    cout << (eq ? "equal" : "not equal") << endl; // hvis +4 er dem equal
    

    // c
    vector<int> odd = {};
    odd.resize(v1.size());

    replace_copy_if(v1.begin(), v1.end(), odd.begin(), [](auto &n){
        return n%2 != 0;
    }, 100);

    for (auto i: odd) {
        cout << i << ", ";
    }

    return 0;
}
