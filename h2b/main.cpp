#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    // Luotiin Car-luokan olioita.
    Car objCar_1=Car("Toyota","Corolla",1992);
    Car objCar_2=Car("Volvo","S80",2007);
    Car objCar_3=Car("Honda","Accord",2011);

    // Lisättiin oliot listaan (vektoriin).
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    // Tulostetaan listan toisen alkion tiedot.
    cout<<"Listan toisen auton tiedot"<<endl;
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot.
    cout<<"Kaikki autot"<<endl;
    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
    return 0;
}
