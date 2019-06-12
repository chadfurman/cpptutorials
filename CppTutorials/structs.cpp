#include <iostream>

using namespace std;

struct database {
    int age;
    int rows;
    string name;
};

void structs() {
    cout<<"Structs"<<std::endl<<"----"<<std::endl;
    database db;
    database *purpleDb;

    db.age = 5;
    db.rows = 100;
    db.name = "purple";
    purpleDb = &db;

    cout << "struct access of 'name' property: " << purpleDb->name << std::endl;
}

