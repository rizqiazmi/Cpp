/**********************************************************
Nama file: using.cpp
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;
using ull = unsigned long long;
using c_string = char[255];

int main() {
    ull a;
    c_string s;

    a = 123'456'789ULL;
    strcpy(s, "Demo using");

    cout << "Nilai a: " << a << endl;
    cout << "Nilai s: " << s << endl;

    return 0;
}
