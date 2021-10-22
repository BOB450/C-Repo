#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isMiniSudoku(std::vector<std::vector<int>> square) {
//variables that count each time its corrsponding number shows in the array
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    
        for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            cout << square[i][j] << " ";
            if(square[i][j] == 1)
            {
                ++one;
            }
            if(square[i][j] == 2)
            {
                ++two;
            }
            if(square[i][j] == 3)
            {
                ++three;
            }
            if(square[i][j] == 4)
            {
                ++four;
            }
            if(square[i][j] == 5)
            {
                ++five;
            }
            if(square[i][j] == 6)
            {
                ++six;
            }

            if(square[i][j] == 7)
            {
                ++seven;
            }
            if(square[i][j] == 8)
            {
                ++eight;
            }
            if(square[i][j] == 9)
            {
                ++nine;
            }




        }   
        cout << endl;
    }

    
            if(one == 1 && two == 1 && three == 1 && four == 1 &&five == 1 &&six == 1 &&seven == 1 &&eight == 1 && nine == 1)
            {
                return true;
            }
            else
            {
                return false;
            }

	
}


int main()
{
    bool result = isMiniSudoku({
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
