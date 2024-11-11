#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // Luotiin Car olio pinomuistiin.
    Car objCar;
    objCar.setBrand("Volvo");
    objCar.setModel("S60");
    objCar.setYearModel(2010);
    objCar.printData();

    // Luotiin Rectangle olio kekomuistiin.
    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setWidth(5);
    objRectangle->setHeight(4);
    cout << "Suorakulmion pinta-ala on: " <<objRectangle->getArea()<<endl;
    cout << "Suorakulmion ymparysmitta on: " <<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;

    // Luotiin Student olio smart-pointterilla.
    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Teppo Opiskelija");
    objStudent->setStudentNumber(7);
    objStudent->setAverage(8.3);
    cout << "Opiskelijan nimi on: "<<objStudent->getName()<<endl;
    cout << "Opiskelijan opiskelijanumero  on: "<<objStudent->getStudentNumber()<<endl;
    cout << "Opiskelijan keskiarvo on: "<<objStudent->getAverage()<<endl;
    return 0;
}
