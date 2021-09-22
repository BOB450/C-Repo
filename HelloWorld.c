#include <stdio.h>
#include <string.h>

float AddNum(float a,float b)
{
   return a + b;
}

int main() {
   // printf() displays the string inside quotation
   

      float x;
      float y;

   printf("Type in the first product: ");
   scanf("%f", &x);
   
   fflush(stdout); // clear input buffer
   printf("Type in the second product: ");
  scanf("%f", &y);
  
   // clear input buffer
   float z = x + y;

   printf("%f\n", z);
   fflush(stdin);
   main();
   
   printf("\nPress ENTER key to Continue");  
   getchar(); 

   return 0;
}


