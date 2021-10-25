#include <iostream>
#include <string>
#include <vector>   
using namespace std;


bool CanSee(std::vector<std::vector<int>> square)
{
    int keep = 0;
     keep = square[0][0];
    int test;
    bool cansee = true;
    for (int i = 1; i < square.size(); i++)
    {
       
       // cout << square[0][0];
        test = square[i][0];
        if(test > keep)
        {
            
        }
        else 
        {
            cansee = false;
        }
        test = keep;
       cout << square[i][0] << " ";
    }
    
return cansee;
}


int main()
{
    
        bool result = CanSee({
        {9,5,3},
        {5,6,5},
        {10,11,8},
        {11,11,11}});

    
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
        
    }
    
    return 0;
}
