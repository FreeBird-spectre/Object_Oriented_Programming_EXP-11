//Abir Seth
//ENCTC
//A1
//PRN-24070123003
  include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void area() {
        double result = length * width;
        cout << "Area of Rectangle: " << result << endl;
    }
};

int main() {
    Rectangle r;
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;

    r.area();
    return 0;
}

Enter length: 56
Enter width: 89
Area of Rectangle: 4984


=== Code Execution Successful ===
