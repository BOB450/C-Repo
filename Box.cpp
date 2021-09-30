#include <iostream>
#include <string>
using namespace std;

int main();

int BoxMaker( int i)
{
   
    for (int g = 0; g < i; g++)
    {
        cout << "#";
    } 
    for (int k = 0; k < i-2; k++)
    {
        cout << "\n#";
        for (int l = 2; l < i; l++)
        {
            cout << " ";
        }
        cout << "#";
    } 
    cout << "\n";
    for (int m = 0; m < i; m++)
    {
        cout << "#";
    } 
    main();
    return 0;
}


int main()
{
    int a;
    cout << "\n\nBox Maker \n\n";
    cin.sync();
    cout << "Enter Dimensions of Box \n";
    cin >> a;
    cin.sync();
    BoxMaker(a);


    return 0;
}
