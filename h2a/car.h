#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
    int yearModel;
    string brand;
    string model;
public:
    Car();
    int getYearModel() const;
    void setYearModel(int newYearModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    void printData();
};

#endif // CAR_H
