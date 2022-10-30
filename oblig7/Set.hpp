#pragma once

#include <vector>
#include <string>

using namespace std;


#ifndef SET_HPP
#define SET_HPP


class Set {

private:
    vector<int> vect;

public:
    Set() = default;
    Set(Set const &set);

    Set& operator=(const Set &other);
    Set operator+(const Set &other) const;
    Set operator+(const int &integer) const;
    friend ostream &operator<<(ostream &os, const Set &set);

};

#endif