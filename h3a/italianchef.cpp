#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef()
{

}

ItalianChef::~ItalianChef()
{

}

ItalianChef::ItalianChef(string value)
{
    name=value;
    cout<<"Chef "<<name<<"konstruktori"<<endl;

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<"makes pasta"<<endl;
}
