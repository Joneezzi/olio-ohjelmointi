#include "car.h"

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::printData()
{
    cout << "Auton merkki: " <<brand<<endl;
    cout << "Auton malli: " <<model<<endl;
    cout << "Auton valmistusvuosi: "<<yearModel<<endl;
}

Car::Car()
{

}
