#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>
#include<math.h>


int TriangleArea()
{
    fflush(stdin);   
    float b;
    float h;

    printf("\n\nArea Of Triangle Calculator");

    printf("\n\n\nEnter the base of triangle: ");
      scanf("%f", &b);

    fflush(stdout); // clear input buffer    
    printf("\nEnter the height of triangle: ");
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

    fflush(stdin);   
    float f;

    printf("\n\nFahrenheit to Celsius Calculator");

    printf("\n\n\nEnter Fahrenheit: ");
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






int SolveForLevers()
{
fflush(stdin);   
int selection;

 printf("\n\n Choose a solve type by typing in a index:  ");\
    printf("\n\n Solve for Force Resistance(0) \n Solve for Distance Resistance(1) \n Solve for Force Effort(2) \n Solve for Distance Effort(3) ");
    fflush(stdout); // clear input buffer    
    scanf("%d", &selection);
     if(selection == 0)
     {
            fflush(stdin);   
    float r;
    float e;
    float d1;
    float d2;

    printf("\n\n2 Force Lever Calculator");

    printf("\n\n\n Enter Force Effort: ");
      scanf("%f", &e);
    fflush(stdout); // clear input buffer   


  // printf("\n\n\n Enter Force Risistacne : ");
  //    scanf("%f", &r);
   // fflush(stdout); // clear input buffer 

      printf("\n\n\n Enter Effort Distance : ");
      scanf("%f", &d1);
    fflush(stdout); // clear input buffer 

          printf("\n\n\n Enter Resistance Distance : ");
      scanf("%f", &d2);
    fflush(stdout); // clear input buffer 
     

     float ans1;
     ans1 = e * d1;
     ans1 = ans1 / d2;

    float ma = d1/ d2;

  //  printf("%f\n", t1);
    printf("\n\nThe Force Resistance is: %f", ans1);
    printf("\n\nThe Mechanical Advantage: %f", ma);


     }
    if(selection == 1)
     {
         
         fflush(stdin);   
    float r;
    float e;
    float d1;
    float d2;

    printf("\n\n2 Force Lever Calculator");

    printf("\n\n\n Enter Force Effort: ");
      scanf("%f", &e);
    fflush(stdout); // clear input buffer   


   printf("\n\n\n Enter Force Resistance : ");
      scanf("%f", &r);
    fflush(stdout); // clear input buffer 

      printf("\n\n\n Enter Effort Distance : ");
      scanf("%f", &d1);
    fflush(stdout); // clear input buffer 


     

     float ans1;
     ans1 = e * d1;
     ans1 = ans1 / r;

     float ma = r/e;


  //  printf("%f\n", t1);
    printf("\n\nThe Distance Resistance is: %f", ans1);
    printf("\n\nThe Mechanical Advantage: %f", ma);


     }
    if(selection == 2)
     {
        
    fflush(stdin);   
    float r;
    float e;
    float d1;
    float d2;

    printf("\n\n2 Force Lever Calculator");

   // printf("\n\n\n Enter Force Effort: ");
    //  scanf("%f", &e);
   // fflush(stdout); // clear input buffer   


   printf("\n\n\n Enter Force Resistance : ");
      scanf("%f", &r);
    fflush(stdout); // clear input buffer 

      printf("\n\n\n Enter Effort Distance : ");
      scanf("%f", &d1);
    fflush(stdout); // clear input buffer 

          printf("\n\n\n Enter Resistance Distance : ");
      scanf("%f", &d2);
    fflush(stdout); // clear input buffer 
     

     float ans1;
     ans1 = r * d2;
     ans1 = ans1 / d1;

     float ma = d1 /d2;

  //  printf("%f\n", t1);
    printf("\n\nThe Force Effort is: %f", ans1);
    printf("\n\nThe Mechanical Advantage: %f", ma);

     }
     if(selection == 3)
     {

    fflush(stdin);   
    float r;
    float e;
    float d1;
    float d2;

    printf("\n\n2 Force Lever Calculator");

    printf("\n\n\n Enter Force Effort: ");
      scanf("%f", &e);
    fflush(stdout); // clear input buffer   


   printf("\n\n\n Enter Force Resistance : ");
      scanf("%f", &r);
    fflush(stdout); // clear input buffer 

     // printf("\n\n\n Enter Effort Distance : ");
      //scanf("%f", &d1);
    //fflush(stdout); // clear input buffer 

          printf("\n\n\n Enter Resistance Distance : ");
      scanf("%f", &d2);
    fflush(stdout); // clear input buffer 
     

     float ans1;
     ans1 = r * d2;
     ans1 = ans1 / e;

     float ma = r/e;

  //  printf("%f\n", t1);
    printf("\n\nThe Effort Distance is: %f", ans1);
    printf("\n\nThe Mechanical Advantage: %f", ma);



     }
     else
     {
         printf("\n Enter a valid input:  ");
         
     }




//-----------------------------------------------------------------------

  SolveForLevers();
   return 0;
}



int Radians()
{
    fflush(stdin);   
    float f;

    printf("\n\nDegrees to Radians");

    printf("\n\n\nEnter Degrees(With no symbols): ");
      scanf("%f", &f);
    fflush(stdout); // clear input buffer   
     float ans = f*0.0174533;

  //  printf("%f\n", t1);
    printf("\n\nRadians: %f", ans);


    Radians();
     fflush(stdin);      
    printf("\nPress ENTER key to Continue");  
    getchar(); 

   return 0;
}


int Efficency()
{

      fflush(stdin);   
    float IMA;
    float AMA;

    printf("\n\n Calculate the efficiency of a simple machine.");

    printf("\n\n\n Enter Ideal Mechanical Advantage ");
      scanf("%f", &IMA);
    fflush(stdout); // clear input buffer   
    
      printf("\n\n\n Enter Actual Mechanical Advantage ");
      scanf("%f", &AMA);
    fflush(stdout); // clear input buffer   

  float eff = AMA/IMA*100;
  //  printf("%f\n", t1);
    printf("\n\nSimple Machines Efficiency: %.2f", eff);
    printf("%%");


    Efficency();
     fflush(stdin);      
    printf("\nPress ENTER key to Continue");  
    getchar(); 

   return 0;


}

int Dice()
{
  int n;
  int max;
  int min;
  int number;


   fflush(stdin);  
   printf("\n\n Calculate the efficiency of a simple machine.");

    printf("\n\n\n Enter Max Range:  ");
      scanf("%d", &max);
    fflush(stdout); // clear input buffer   


    printf("\n\n\n Enter Min Range:  ");
      scanf("%d", &min);

        printf("\n\n\n Enter Number of times to Generate:  ");
      scanf("%d", &n);
    fflush(stdout); // clear input buffer   

        srand(time(NULL));
 
    for(int i = 0; i<n; i++)
    {
      number = rand() % (max-min+1) + min;
        printf(" %d",number);
    }
  Dice();
    fflush(stdout); // clear input buffer   

}


int CalPi()
{
  long int i, n;
 double sum=0.0, ter, pi;
 
 printf("\nEnter number of terms(Higher will be more accurate): ");
 scanf("%ld", &n);

//Applying formula lorenze
 for(i=0;i< n;i++)
 {
  ter = pow(-1, i) / (2*i+1);
  sum += ter;
 }
 pi = 4 * sum;

 printf("\nPI = %.9999g", pi);
 
CalPi();

 return 0;
}

int PrimeFinder()
{
  int Num, flag = 0, i;
     fflush(stdin);  
   printf("\n\n Find if a number is Prime.");

    printf("\n\n\n Enter Number:  ");
      scanf("%d", &Num);

      for (i = 2; i <= Num / 2; ++i) {
    // condition for non-prime
    if (Num % i == 0) {
      flag = 1;
      break;
    }
  }

    if (Num <=1)
    {
      printf("\nThis number is nor prime or composite");
    } 
    else
    {
      if(flag == 0)
      {
        printf("%d is a prime number.", Num);
      }
      else
      {
        printf("%d is not a prime number.", Num);
      }
    }
  PrimeFinder();
  return 0;
}


//-----------------------------------------MAIN-------------------------------------------------
int main() 
{

    int m;
    printf("\n\n Welcome To The Math Calculator Hub:  ");\
    printf("\n\n Triangle Area(0) \n Fahrenheit to Celsius(1) \n Solve 2 force levers(2) \n Covert Deegrees to Radians(3) \n Solve for Simple Machine Efficiency(4) \n Random Number Generator(5) \n Calculate PI To any Digits(6) \n Prime Finder(7) ");
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
    if(m == 2)
     {
        SolveForLevers();
     }
    if(m == 3)
     {
        Radians();
     }
    if(m == 4)
     {
        Efficency();
     }
     if(m == 5)
     {
       Dice();
     }
    if(m == 6)
     {
       CalPi();
     }
     if(m == 7)
     {
       PrimeFinder();
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




