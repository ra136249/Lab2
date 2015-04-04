#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
   char a[SIZE], b[SIZE]; 

   // Reads the two input strings to be compared.
   printf("Enter the first string:\n"); 
   fgets(a, SIZE, stdin);
   printf("Enter the second string:\n");
   fgets(b, SIZE, stdin); 

   // Tests if the two strings are equal or not.
   if (strcmp(a,b) == 0) 
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");

   return 0;
}
