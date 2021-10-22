#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
    #include<cmath>


using namespace std;



int getDigit(int D, int n)
{
    string dS = to_string(D);
    int Len = dS.length();
        for (int i = 0; i < Len; i++) {
            if(i == n)
            {
               return   dS[i] - 48;
            }
    }
}


int main()
{

getDigit(12345,4);

    

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

    unordered_map<int, string> umap2;
     umap2[3] = "thirty";
     umap2[4] = "fourty";
     umap2[2] = "twenty";
     umap2[5] = "fifty";
     umap2[6] = "sixty";
     umap2[7] = "seventy";
     umap2[8] = "eighty";
     umap2[9] = "ninty";


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

    int size = trunc(log10(input)) + 1; // get length

    
    if(size == 3)
    {
    cout <<  umap.at(getDigit(input, 0));
    cout << " hundred" << " and ";
    if(getDigit(input,1) != 0){
    cout << " " << umap2.at(getDigit(input,1)) << " ";
    }
    cout << umap.at(getDigit(input, 2));

    }
    if(size == 2)
    {
        cout << " " << umap2.at(getDigit(input,0)) << " ";
        if(getDigit(input, 1) != 0){
        cout <<  umap.at(getDigit(input, 1));}
    }

    if(size == 1)
    {
        cout << umap.at(input);
    }
    
    //cout << umap.at(getDigit(input,0)) << "\n";


    
    
    return 0;
}
