#include <iostream>
#ifndef PER_ROW
#define PER_ROW 20
#endif

using namespace std;

void typecasting() {
    cout<< "Typecasting" << std::endl << "----" << std::endl;

    for (int i = 1; i < 128; i++) {
        cout << static_cast<char>(i) << " ";
        if ((i % PER_ROW) == 0) {
            cout << std::endl;
        }
    }
    cout << std::endl;
}