#include <iostream>
#include <string>

using namespace std;

int main() {

    string word1, word2, word3;
    cin >> word1 >> word2 >> word3; // a)

    cout << word1 << " " << word2 << " " << word3 << endl;

    // b)
    string whitespace = " ";
    string dot = ".";

    string sentence =  word1.append(whitespace  +  word2).append(whitespace + word3).append(dot);
    cout << sentence << endl;

    int length_word1, length_word2, length_word3;

    length_word1 = sentence.find_first_of(" ", 0);
    length_word2 = sentence.find_first_of(" ", length_word1 + 1) - length_word1 - whitespace.size();
    length_word3 = sentence.length() - sentence.find_last_of(" ") - whitespace.length() - dot.length();

    cout << length_word1 << endl;
    cout << length_word2 << endl;
    cout << length_word3 << endl;


    // d)
    string sentence2 = sentence;
    /*
    cout << "Sentence2: " << sentence2 << endl;
    sentence2 = "hei";
    cout << "sentence2 etter forandring til hei: " << sentence2  << endl;
    cout << "Sentence etter forandring av sentence2: " << sentence << endl;
     */

    // e)
    sentence2.replace(10, 3,  "xxx", 0, 3);
    cout << "sentence2: " << sentence2 << endl;
    cout << "sentence: " << sentence << endl;


    // f)





    return 0;
}

