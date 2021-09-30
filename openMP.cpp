#include <iostream>
#include <omp.h>
int main()
{
    int i = 0;
    #pragma omp parallel
    {
        std::cout << "Hello World" << std::endl;
        ++i;
    }
    std::cout << "You have  " << i << " Logical Threads";
    return 0;
}
