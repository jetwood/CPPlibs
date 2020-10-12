#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

    string s1("a");
    cout << "\nconstructor: " << s1 << endl;

    char dam[] = "A";
    s1 = dam;
    cout << "\noperator = " << dam << ": "<< s1 << endl;

    char tst[] = "a";
    s1.assign(tst);
    cout << "\nassign(" << tst << "): " << s1 << endl;

    s1 = "abc";
    string s2 = "def";
    cout << "\nswap()before. s1 = " << s1 <<"; s2 = "<< s2 << endl;
    swap(s1, s2);
    cout << "swap()after. s1 = " << s1 <<"; s2 = "<< s2 << endl;

    s1 = "abc";
    cout << "\ns1 operator += before: " << s1 << endl;
    s2 = "def";
    s1 += s2;
    cout << "s1 operator += "<< s2 << ": " << s1 << endl;

    s1 = "abc";
    cout << "\ns1 append() before: " << s1 << endl;
    s2 = "def";
    s1.append(s2);
    cout << "s1 append() " << s2 << ": " << s1 << endl;

    s1 = "abc";
    cout << "\ns1 push_back() before: " << s1 << endl;
    char ad = 'd';
    s1.push_back(ad);
    cout << "s1 push_back() " << ad << ": " << s1 << endl;

    s1 = "abc";
    cout << "\ns1 push_back() before: " << s1 << endl;
    char ist = 'A';
    int pos = 2;
    int num = 2;
    s1.insert(pos, num, ist);
    cout << "s1 insert " << num << " of " << ist << " at " << pos << " : " << s1 << endl;

    s1 = "abc";
    string st3(s1, 1);
    cout << st3 << endl;

    string s4("123", 2);
    cout << s4 << endl;

    string s5( 3, 'x');
    cout << s5 << endl;


    cout << s5.front() << endl;
    s5.assign("D");
    cout << s5 << endl;

    return 0;
}
