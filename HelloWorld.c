#include <stdio.h>
#include <string.h>

int AddNum(float a,float b)
{
   return a + b;
}

int main() {
   // printf() displays the string inside quotation
   

      int x;
      int y;

   printf("Type in the first product: ");
   scanf("%d", &x);
   
   fflush(stdout); // clear input buffer
   printf("Type in the second product: ");
  scanf("%d", &y);
  
   // clear input buffer
   int z = x + y;

   printf("%d\n", z);
   fflush(stdin);
   main();
   
   printf("\nPress ENTER key to Continue");  
   getchar(); 

   return 0;
}


