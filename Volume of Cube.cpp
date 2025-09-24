#include <iostream>
using namespace std; 

class cube{
    private :
    double height = 8; 
    double width = 7; 
    double length = 4; 
    
    public :
    double volume(){
        double v; 
        v = height*width* length ; 
        return v;
    }

};
int main() {
    cube cu;
    cout << "The volume is : " << cu.volume();

    return 0;
}

The volume is : 224

=== Code Execution Successful ===
