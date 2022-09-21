#include <iostream>
using namespace std;

class Area
{
public:
    static void print_area(int l, int b)
    {
        cout << l*b << endl;
    }

    static void print_area(int s)
    {
        cout << s*s << endl;
    }
};

int main()
{
    Area::print_area(7);
    Area::print_area(7,8);
    return 0;
}                                 

