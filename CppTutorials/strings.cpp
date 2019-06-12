#include <iostream>
#include <cstring>

using namespace std;

void strings() {
    char name[50];
    char lastname[50];
    char fullname[100];

    cout<<"Strings"<<std::endl<<"----"<<std::endl;
    cout << "Please enter your name: ";
    cin.getline(name, 50);
    if (strcmp(name, "Chad") < 0) {
        cout << "I'm first!" << std::endl;
    } else {
        cout << "I'm not first! *sadface*" << std::endl;
    }

    cout << "your name is " << strlen(name) << "Letters long" << std::endl;
    fullname[0] = '\0'; // needed for strcat
    strcat(fullname, name);
    strcat(fullname, " ");
    strcat(fullname, lastname);
    cout << "your full name is " << fullname << std::endl;
}