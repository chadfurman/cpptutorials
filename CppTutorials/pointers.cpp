#include <iostream>

using namespace std;

void pointers()
{
    int x;
    int *p;

    cout<<"Pointers"<<std::endl<<"----"<<std::endl;
    cout<<"Enter a number: "<<std::endl;
    p = &x;
    cin >> x;
    cin.ignore();
    cout << *p << std::endl;
    cout << p << std::endl;
}