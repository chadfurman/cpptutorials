#include <fstream>
#include <iostream>

using namespace std;

void files() {
    cout<< "Files" << std::endl << "----" << std::endl;
    string str;
    ofstream outfile("file.txt");
    if (!outfile.is_open()) {
        cout << "Could not open file.txt for writing" << std::endl;
        outfile.close();
        return;
    }
    outfile<<"This is some text"<<std::endl;
    outfile.close();
    ifstream infile("file.txt");
    if (!infile.is_open()) {
        cout << "Could not open file.txt for resding" << std::endl;
        outfile.close();
        infile.close();
        return;
    }
    infile>>str;
    cout<<"We read the following from file.txt: "<<std::endl;
    cout<< str << std::endl;
    cout<<"We read this line from file.txt: "<<std::endl;
    std::getline(infile, str);
    cout<<str<<std::endl;
    infile.close();
}