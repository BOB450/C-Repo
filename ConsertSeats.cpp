#include <iostream>
#include <string>
#include <vector>   
using namespace std;


bool CanSee(std::vector<std::vector<int>> square)
{
    
    return true;
}


int main()
{
        bool result = CanSee({
        {1,2,3},
        {4,6,5},
        {9,7,8}});


    if(result == true)
    {
        cout << "\nTrue";
    }
    else if (result == false)
    {
        cout << "false";
    }
    else
    {
        cout << "Nor";
    }
    
    return 0;
}
