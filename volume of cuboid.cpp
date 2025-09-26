#include<iostream>
using namespace std;

class Cubiod{
    public:
    int length , breadth , height , volume;
    void input()
    {
        cout << "Enter the length : ";
        cin >> length;
        cout << "Enter the breadth : ";
        cin >> breadth;
        cout << "Enter the height : ";
        cin >> height;
    } 
    void Volume()
    {
        volume = length * breadth * height ;
    }
      void Output()
    {
        cout << "The volume of the given Cubiod is : " << volume << endl;
    }
    };

       int main(){
        Cubiod v1;
        v1.input();
        v1.Volume();
        v1.Output();

    return 0;
}

Enter the length : 5
Enter the breadth : 9
Enter the height : 8
The volume of the given Cubiod is : 360


=== Code Execution Successful ===
