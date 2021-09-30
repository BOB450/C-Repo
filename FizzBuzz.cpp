#include <iostream>
#include <string>

using namespace std;

 int main()
 {
     int a;
     cout << "Welcome to fizz buzz press enter to start. \n";
     std::getchar();
     cin.sync();
     cout << "Enter How Far to FizzBuzz \n";
     cin >> a;
     cout << "\n\n\n";

        for( int i = 1; i < a + 1; i++)
        {
            if(i % 3 == 0 && i % 5 == 0)
            {
                cout << "FizzBuzz\n";
            } 
            else if(i % 3 == 0)
            {
                cout << "Fizz\n";
            }
            else if(i % 5 == 0)
            {
                cout << "Buzz\n";
            }
            else
            {
                cout << i << "\n";
            }

        }

    main();
     cin.sync();
     std::getchar();
     

     return 0;
 } 


 