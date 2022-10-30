#include "Set.hpp"
#include <iostream>

Set::Set(Set const &used) {
    *this = used;
}


 Set& Set::operator=(const Set &other) {
    vect.clear();

    for (auto num : other.vect) {
        vect.emplace_back(num);
    }
    return *this;
 }

Set Set::operator+(const Set &other) const {

    Set result;
    result = *this;

    for (auto num : other.vect) {
        result = result + num;
    }

    return result;
}


Set Set::operator+(const int &number) const {
    Set result = *this;
    
    if (none_of(vect.begin(), vect.end(), [&](const auto &i) {
        return i == number;
    })) {
        result.vect.emplace_back(number);
    }

    return result;
}

ostream &operator<<(ostream &os, const Set &set) {
    os << "";
    for (auto num : set.vect) {
        os << num << " ";
    }
    return os;
}





