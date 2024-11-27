#include "myclass.h"
#include <iostream>

using namespace std;

int main()
{
    MyClass *objMy=new MyClass;
    objMy->raiseMySignal();
    return 0;
}
