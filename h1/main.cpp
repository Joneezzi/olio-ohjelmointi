#include <iostream>
#include <iomanip> // Käytin iomanip kirjastoa saadakseni osamäärässä tulostumaan desimaalit.
using namespace std;

int main()
{
    int calcSum (int);
    float calcDiv (float);
    int a, b;
    int retSum;
    float retDiv;
    cout << "Lasketaan summa ja osamaara!" << endl;
    cout << "Anna luku" << endl;
    cin >> a;
    cout << "Anna toinen luku" << endl;
    cin >> b;

    if (b==0) {
    retSum = a + b;
        cout << "Lukujen summa on = " << retSum << endl;
        cout << "Jakaja oli nolla = osamaaraa ei voitu laskea." << endl;
        return 0;

    } else {

    retSum = a + b;
    retDiv = static_cast<float>(a) / b;

    cout << "Lukujen summa on = " << retSum << " ja osamaara on = " << setprecision(3) << retDiv << endl; // setprecisionin avulla saadaan osamäärä tulostumaan 2 desimaalin tarkkuudella.
    }
    return 0;
}
