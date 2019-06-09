#include <iostream>

using namespace std;

struct database {
    int age;
    int rows;
    string name;
};

void structs() {
    database db;
    database *purpleDb;

    db.age = 5;
    db.rows = 100;
    db.name = "purple";
    purpleDb = &db;

    cout << purpleDb->name << std::endl;
}

