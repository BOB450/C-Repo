#include <iostream>
#include <string>
#include <unordered_map>
#include <map>

using namespace std;


int count_digit(int number) {
   return int(log10(number) + 1);
}


int main()
{
    //hash map
     unordered_map<int, string> umap;
     umap[1] = "one";
     umap[2] = "two";
     umap[3] = "three";
     umap[4] = "four";
     umap[5] = "five";
     umap[6] = "six";
     umap[7] = "seven";
     umap[8] = "eight";
     umap[9] = "nine";
     umap[10] = "ten";


    int input;
    cout << "Enter a number to be translated to english:  " ;
    cin >> input;
    if(input >= 1000 || input < 0)
    {
        cout << "\nEnter a number between 0 and 999";
    }
    //cout <<  "\n" << input;
    
    // check for edge cases

    if(input == 0)
    {
        cout << "\n Zero";
    }

    if(count_digit(input) == 2)
    {
        
    }

    cout << umap.at(input) << "\n";

    
    
    return 0;
}
