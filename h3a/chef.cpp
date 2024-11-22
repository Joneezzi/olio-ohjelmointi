#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef()
{

}

Chef::Chef(string chefName)
{
    name=chefName;
    cout<<"Chef "<<name<<"konstruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<"makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<"makes soup"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<"destruktori"<<endl;
}

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}
