/**********************************************************
Nama file: goto.cpp
***********************************************************/

#include <iostream>

using namespace std;

int main(){
    int i {0};

    // mendefinisikan label
    mulai:

    if (i <= 20) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;

        // kembali ke atas
        goto mulai;
    }
    return 0;
}
