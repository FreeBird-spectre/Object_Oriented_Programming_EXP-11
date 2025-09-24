#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    double num1;
    double num2;
    
    double add() {
        return num1 + num2;
    }
    double subtract() {
        return num1 - num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "\nError: Cannot divide by zero.\n";
            return 0.0; 
        }
    }
    double cube() {
        return num1 * num1 * num1;
    }
};

int main() 
{
    Calculator Nums;
    
    cout << "Enter The First Number: ";
    cin >> Nums.num1;
    cout << "Enter The Second Number: ";
    cin >> Nums.num2;
    
    cout << "The addition of the 2 numbers is: " << Nums.add() << endl;
    cout << "The difference of the 2 numbers is: " << Nums.subtract() << endl;
    cout << "The Multiplication of the 2 numbers is: " << Nums.multiply() << endl;
    cout << "The Division of the 2 numbers is: " << Nums.divide() << endl;
    cout << "The Cube of the first number is: " << Nums.cube() << endl;
    
    return 0;
}

Enter The First Number: 45
Enter The Second Number: 78
The addition of the 2 numbers is: 123
The difference of the 2 numbers is: -33
The Multiplication of the 2 numbers is: 3510
The Division of the 2 numbers is: 0.576923
The Cube of the first number is: 91125


=== Code Execution Successful ===
