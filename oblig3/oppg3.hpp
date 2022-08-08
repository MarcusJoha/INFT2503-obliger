//
// Created by Marcus Johannessen on 07/08/2022.
//

#ifndef OBLIG3_COMMODITY_HPP
#define OBLIG3_COMMODITY_HPP

#endif //OBLIG3_COMMODITY_HPP

#include <string>

using namespace std;

class Commodity {

public:
    Commodity(string &name_, int id_, double price_ );
    string get_name() const;
    int get_id() const;
    double get_price(const double &amount);
    void set_price(const double &price_);
    double get_price_with_sales_tax(const double &amount);
private:
    string name;
    const int id;
    double price = 0.0;
};
