#include "fraction.hpp"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
  cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
  

  Fraction fraction1(15,3);

  /**
   * Oppgave 1 a)
   * 
   */
  fraction1 - 5;
  5 - fraction1;

}
