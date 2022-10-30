#include "fraction.hpp"
#include "Set.hpp"
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
  fraction1 - 10;
  10 - fraction1;

  // vector<int> numbers = {1,2,3,4,5,6,7};

  // initialisere en ny tom mengde
  Set set;
  cout << "Ny tom mengde: " << set << endl;

  Set set1;
  set1 = set1 + 1 + 2 + 4 + 5;

  Set set2;
  set2 = set2 + 2 + 5 + 10;

  set1 = set1 + set2;

  cout <<"Union of set1 and set2: " << set1 << endl; // forventet: 1,2,3,4,5,10

  // Ssette et nytt tall inn
  set1 = set1 + 42;
  cout << "Settet inn 42 inn i set1: " << set1 << endl; // forventet 1,2,3,4,5,10, 42

  Set set3;

  // Sette en mengde lik en annen
  set3 = set1;
  cout << "set3 som skal være lik set1: " << set3 << endl;
}
