#include <iostream>

using namespace std;

// function to oppg 6
int find_sum(const int *table, int length) {
    int x = 0, y = 0 , z = 0, i = 0;

    while (i < 10) {

        x += table[i];

        i++;
    }
    while (i < 15) {
        y += table[i];
        i++;
    }
    while (i < length) {
        z += table[i];
        i++;
    }
    cout << "De 10 første tallene sum: " << x << endl;
    cout << "De 5 neste tallene sum: " << y << endl;
    cout << "De 5 siste tallene sum: " << z << endl;

    return i;
}

int main() {

    /*
     * Oppgave 1
     */

    // a)
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    // dereference, verdi
    cout << *p << endl; // 3
    cout << *q << endl; // 5

    // Minne adresse
    cout << p << endl;
    cout << q << endl;

    // b)
    *p = 7; // 7
    *q += 4; // 9
    *q = *p + 1; // 8
    p = q; // 8
    cout << *p << " " <<  *q <<endl; // 8 8


    /*
     * Oppgave 2
     */

    /*
    char *line = nullptr; // eller char *line = 0;
    strcpy(line, "Dette er en tekst");

    cout << *line << endl;
    cout << *line << endl;
     */

    // nullptr har adresse 0x000000, har ikke lov til å bruke den


    /*
     * Oppgave 3
     */

    char text[5];
    char *pointer = text;
    cin >> text; // feil hvis lengde på text er større enn 5

    char search_for = 'e';
    while (*pointer != search_for) { // hvis text ikke har e vil den gå out of bond
        *pointer = search_for;
        pointer++;
    }

    /*
     * Oppgave 4
     */

    /*
    int a = 5;

    int &b; // Kan ikke gjøre dette for en referanse

    int *c; // random minne adresse

    c = &b; // hadde funket hvis det sto int b = 5 for eksempel;

    *a = *b + *c; // hadde funket hvis *a, *b, *c hadde peket til en referanse fra før

    &b = 2;
    */

    /*
     * Oppgave 5
     */

    double number = 5.0;

    double *point = &number;

    double &ref = number;

    cout <<"Number: " << number << endl;
    cout <<"Pointer (de-referenced): "<< *point << endl;
    cout <<"Pointer: "<< point << endl;
    cout <<"Reference: "<< ref << endl;

    // 1
    number = 3.5;
    // 2
    double x = 2.5;
    double *numb = &x; // points to memory address of x
    // 3
    double y = 6.7;
    double &num = y; // &num is a reference to y


    /*
     * Oppgave 6
     */

    int array[20];

    for (int c = 0; c < 20; c++) {
        array[c] = c+1;
    }

    find_sum(array, 20);


    return 0;
}

