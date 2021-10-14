#include <iostream>
#include <math.h>
#include <string>
using namespace std;

float coAx(float Dd, float Dc, float er)
{
 float total = log10(Dd/Dc);
 total = total * 138;
 float fin = total / sqrt(er); 
 return fin;
}


int main()
{
    cout << coAx(4.48, 1.33, 2.2);
    return 0;
}
