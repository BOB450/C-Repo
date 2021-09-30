#include <stdio.h>
#include <string.h>
#include <time.h>



int main() {
   // printf() displays the string inside quotation
   


   /*
    time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );
  */
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  printf("%02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
  

   
   
   printf("\nPress ENTER key to Continue");  
   getchar(); 

   return 0;
}


