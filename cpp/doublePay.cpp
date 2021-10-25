#include <iostream>
#include <string>
using namespace std;


int doublePay(int day)
{
    int r = 0;
    int p = 1;
    for( int i = 0; i < day; ++i)
    {
        r += p;
        p *= 2;
    
    }
    return r;
}


int main()
{
    int input = 0;
    cin >> input;
    cout << doublePay(input);
    return 0;
}
