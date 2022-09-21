#include <iostream>
using namespace std;

class PrintNumber
{
public:
    static void printn(int n)
    {
        cout << n << endl;
    }

    static void printn(float n)
    {
        cout << n << endl;
    }

    static void printn(double n)
    {
        cout << n << endl;
    }
};

int main()
{
    PrintNumber::printn(7);
    PrintNumber::printn(7.123);
    PrintNumber::printn(7.123435);
    return 0;
}                                 

