#include <iostream>
#include "TutorialConfig.hpp"
#ifdef USE_TUTORIALS
#include "CppTutorials.h"
#endif

using namespace std;

void start();
void runAgain();

int main() {
    cout<<"C++ Tutorial (v"<<Tutorial_VERSION_MAJOR<<"."<<Tutorial_VERSION_MINOR<<std::endl;
    start();
}

void start() {
    int choice;
    cout<<"What lesson would you like to run?"<<std::endl;
    cout<<"1) variables"<<std::endl;
    cout<<"2) pointers"<<std::endl;
    cout<<"3) structs"<<std::endl;
    cout<<"4) strings"<<std::endl;
    cout<<"5) files"<<std::endl;
    cout<<"6) typecasting"<<std::endl;
    cout<<"7) classes"<<std::endl;
    cout<<"-1) exit"<<std::endl;
    cout<<std::endl<<"Enter your choice: "<<std::endl;
    cin >> choice;
    cin.ignore();
    switch(choice) {
        case 1:
#ifdef USE_TUTORIALS
            variables();
#else
            cout<<"You chose variables"<<std::endl;
#endif
            runAgain();
            break;
        case 2:
#ifdef USE_TUTORIALS
            pointers();
#else
            cout<<"You chose pointers"<<std::endl;
#endif
            runAgain();
            break;
        case 3:
#ifdef USE_TUTORIALS
            structs();
#else
            cout<<"You chose structs"<<std::endl;
#endif
            runAgain();
            break;
        case 4:
#ifdef USE_TUTORIALS
            strings();
#else
            cout<<"You chose strings"<<std::endl;
#endif
            runAgain();
            break;
        case 5:
#ifdef USE_TUTORIALS
            files();
#else
            cout<<"You chose files"<<std::endl;
#endif
            runAgain();
            break;
        case 6:
#ifdef USE_TUTORIALS
            typecasting();
#else
            cout<<"You chose typecasting"<<std::endl;
#endif
            runAgain();
            break;
        case 7:
#ifdef USE_TUTORIALS
            classes();
#else
            cout<<"You chose classes"<<std::endl;
#endif
            runAgain();
            break;
        case -1:
            cout<<"Alright, exiting..."<<std::endl;
            break;
        default:
            cout<<"You chose incorrectly.  Please pick from the list."<<std::endl;
            runAgain();
    }
}

void runAgain() {
    cout<<"Press RETURN to continue"<<std::endl;
    cin.get();
    return start();
}
