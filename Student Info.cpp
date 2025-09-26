//Abir Seth
//ENTC A1
//PRN-24070123003
#include <iostream>
using namespace std;

class Student {
public:
    
    string name;
    string branch;
    string subject;
    string year;
    string previous_occupation;
    string current_occupation;
    string result;
};

int main() {
    Student s1;
    s1.name = "ANKUSH JHA";
    s1.previous_occupation = "CEO of American Touristor";
    s1.current_occupation = "Dacoit of Mumbai";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.result = "CGPA 10";

    cout << s1.name << endl
         << s1.branch << endl
         << s1.result << endl
         << s1.previous_occupation << endl
         << s1.current_occupation << endl
         << s1.result << endl
         << s1.subject << endl;
         
    Student s2;
    s2.name = "ABIR SETH";
    s2.previous_occupation = "CEO of Adidas";
    s2.current_occupation = "King of Mumbai";
    s2.branch = "E&TC";
    s2.subject = "C++";
    s2.result = "CGPA 10";

    cout << s2.name << endl
         << s2.branch << endl
         << s2.result << endl
         << s2.previous_occupation << endl
         << s2.current_occupation << endl
         << s2.result << endl
         << s2.subject << endl;


    return 0;
}

ANKUSH JHA
E&TC
CGPA 10
CEO of American Touristor
Dacoit of Mumbai
CGPA 10
C++
ABIR SETH
E&TC
CGPA 10
CEO of Adidas
King of Mumbai
CGPA 10
C++


=== Code Execution Successful ===
