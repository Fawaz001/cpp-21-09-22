#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
public:
    Student(string s)
    {
        name = s;
    }
    Student()
    {
        name = "Unknown";
    }
    void print_name()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Jhon");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}                                  
