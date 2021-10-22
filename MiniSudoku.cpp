#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isMiniSudoku(std::vector<std::vector<int>> square) {

        for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            cout << square[i][j] << " ";
        }   
        cout << endl;
    }

	return false;
}


int main()
{
    bool result = isMiniSudoku({
        {1,1,1},
        {4,2,5},
        {9,7,3}});


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
