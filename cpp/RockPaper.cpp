#include <iostream>
#include <string>
using namespace std;

int main()
{
    int PL1;
    int PL2;
    cout << "Rock Paper Scissors\n\n\n"; 
    cout << "Player 1, Enter 1 for rock 2 for sisors 3 for paper \n\n";
    cin >> PL1;
    cin.sync();//Wipe input Buffer
    cout << "Player 2, Enter 1 for rock 2 for sisors 3 for paper \n\n";
    cin >> PL2;

    if(PL1  == 1 && PL2 == 1)
    {
        cout << "Tie\n";
    }
    if(PL1  == 1 && PL2 == 2)
    {
        cout << "PLayer 1 wins\n";
    }  
    if(PL1  == 1 && PL2 == 3)
    {
        cout << "PLayer 2 wins\n";
    }  


    if(PL1  == 2 && PL2 == 1)
    {
        cout << "PLayer 2 wins\n";
    }            
    if(PL1  == 2 && PL2 == 2)
    {
        cout << "Tie\n";
    }  
    if(PL1  == 2 && PL2 == 3)
    {
        cout << "PLayer 1 wins\n";
    }  
    if(PL1  == 3 && PL2 == 1)
    {
        cout << "PLayer 1 wins\n";
    }  
    if(PL1  == 3 && PL2 == 2)
    {
        cout << "PLayer 2 wins\n";
    }  
    if(PL1  == 3 && PL2 == 3)
    {
        cout << "Tie\n";
    }  


    main();
    return 0;
}
