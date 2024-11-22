#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
   ~ItalianChef();
    ItalianChef(string value);
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
