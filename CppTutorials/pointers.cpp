#include <iostream>

using namespace std;

void pointers()
{
    int x;
    int *p;

    p = &x;
    cin >> x;
    cin.ignore();
    cout << *p << std::endl;
    cout << p << std::endl;

    cin.get();
}