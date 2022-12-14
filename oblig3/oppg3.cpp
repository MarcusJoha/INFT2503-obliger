#include <iostream>
#include "oppg3.hpp"
#include <string>

using namespace std;

/*
 * Oppgave 3
 */

const double sales_tax = 0.25;

Commodity::Commodity(string &name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

string Commodity::get_name() const {
    return name;
}

int Commodity::get_id() const {
    return id;
}

double Commodity::get_price(const double &quantity = 1) {
    return price;
}

double Commodity::get_price_with_sales_tax(const double &amount) {
    double hei = amount * price;
    return hei + hei * sales_tax;
}

void Commodity::set_price(const double &price_) {
    this->price = price_;
}

int main() {

    const double quantity = 2.5;
    string commodity_name = "norvegia";

    Commodity commodity(commodity_name, 123, 73.50);

    cout << "Varenavn: " << commodity.get_name() << ", varenr: " << commodity.get_id() << " Pris pr enhet: " << commodity.get_price() << endl;

    cout << "Kilopris: " << commodity.get_price() << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;

    commodity.set_price(79.60);
    cout << "Ny kilopris: " << commodity.get_price() << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
    cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;


    return 0;
}