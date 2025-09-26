//Abir Seth
//ENTC
// A1
// PRN-24070123003
#include <iostream>
using namespace std;

class Car {
public:
    // properties/attributes
    string brand;
    string model_name;
    string production_year;
    string type;
    string top_speed;
};

int main() {
    Car c1;
    c1.brand = "Aston Martin";
    c1.model_name = "DB 5";
    c1.production_year = "1963-65";
    c1.type = "British grand tourer (GT)";
    c1.top_speed = "233 km/h";

    cout << c1.brand << endl
         << c1.model_name << endl
         << c1.production_year << endl
         << c1.type << endl
         << c1.top_speed << endl;
         
   
    Car c2;
    c2.brand = "Ford";
    c2.model_name = "Mustang";
    c2.production_year = "1969";
    c2.type = "Muscle Car";
    c2.top_speed = "255 km/h";

    cout << c2.brand << endl
         << c2.model_name << endl
         << c2.production_year << endl
         << c2.type << endl
         << c2.top_speed << endl;

    return 0;
}

Aston Martin
DB 5
1963-65
British grand tourer (GT)
233 km/h
Ford
Mustang
1969
Muscle Car
255 km/h


=== Code Execution Successful ===
