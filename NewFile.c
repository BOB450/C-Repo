#include <stdio.h>
#include <string.h>





int TriangleArea()
{
    float b;
    float h;

    printf("\n\nArea Of Triangle Calculator");

    printf("\n\n\nEnter the base of triagle: ");
      scanf("%f", &b);

    fflush(stdout); // clear input buffer    
    printf("\nEnter the base of triagle: ");
      scanf("%f", &h);

    float t2 =  b * h;
    float t1 = t2/2;

  //  printf("%f\n", t1);
    printf("\n\nThe area of the triangle is: %f", t1);


    TriangleArea();
     fflush(stdin);      
    printf("\nPress ENTER key to Continue");  
    getchar(); 

   return 0;
}

int fahrenheit()
{
    float f;

    printf("\n\nFahrenheit to Celsius Calculator");

    printf("\n\n\nEnter Fahrenhei: ");
      scanf("%f", &f);
    fflush(stdout); // clear input buffer   
     float ans = (f-32)*5/9;

  //  printf("%f\n", t1);
    printf("\n\nThe celsius equivalent: %f", ans);


    fahrenheit();
     fflush(stdin);      
    printf("\nPress ENTER key to Continue");  
    getchar(); 

   return 0;
}




//-----------------------------------------MAIN-------------------------------------------------
int main() 
{

    int m;
    printf("\n\n Welcome To The Math Calculator Hub:  ");\
    printf("\n\n Triangle Area(0) \n Fahrenheit to Celsius(1)  ");
    fflush(stdout); // clear input buffer    
    scanf("%d", &m);
     if(m == 0)
     {
         TriangleArea();
     }
    if(m == 1)
     {
         fahrenheit();
     }
     else
     {
         printf("\n Enter a valid input:  ");
         main();
     }

        fflush(stdin);      
    printf("\nPress ENTER key to Continue");  
    getchar(); 
}