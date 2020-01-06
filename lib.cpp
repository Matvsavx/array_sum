#include <iostream>
#include "fstream"

using namespace std;

int delenie (ifstream &f) {
    int a, b;
    string astr, bstr;
    getline(f, astr);
    getline(f, bstr);

    if (astr == "" || bstr == "") {
        cout << "Опачки, не хватает чисел в файле\n";
    } else {
        if (bstr == "0") {
            cout << "Программа не делит на 0\n";
        } else {
            a = atoi(astr.c_str());
            b = atoi(bstr.c_str());
            return a / b;
        }
    }
}