#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{

public:

    Chef();
    Chef(string value);
    void makeSalad();
    void makeSoup();
    ~Chef();

    string getName() const;
    void setName(const string &newName);

protected:
    string name;
};

#endif // CHEF_H
