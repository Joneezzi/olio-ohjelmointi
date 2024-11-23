#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel(" Corolla");
    objCar.printDetails();




    return 0;
}
