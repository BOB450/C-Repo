#include <iostream>
#include <string>
using namespace std;

int sakeFill(int n)
{
    int a = n * n;
    int Teat = 0;
    int s = 1;

    while (s <= a)
    {
        s = s * 2;
        Teat = Teat + 1;
    } 
    return Teat;
}

int main()
{
    cout << sakeFill(900);
    return 0;
}

