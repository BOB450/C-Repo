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
      int a;
      int b;
   printf("Type in the first product: ");
   scanf("%d", &x);
   x = a;
   fflush(stdin); // clear input buffer
   printf("Type in the second product: ");
  scanf("%d", &y);
  y = b;
   fflush(stdin); // clear input buffer
   

   printf("%d\n", AddNum(a,b));

   printf("\nPress ENTER key to Continue");  
   getchar(); 

   return 0;
}


