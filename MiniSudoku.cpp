#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isMiniSudoku(std::vector<std::vector<int>> square) {
    
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
