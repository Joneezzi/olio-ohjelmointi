#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay ");
    objChef.makeSalad();
    objChef.makeSoup();

    ItalianChef objItalianChef("Anthony Bourdain ");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.getName();
    objItalianChef.makePasta();

    cout<<"name of the Italian Chef is "<<objItalianChef.getName()<<endl;
    return 0;
}

    // Yritin, mutta ei ihan auennut tuon aliluokan toiminta minulle.
