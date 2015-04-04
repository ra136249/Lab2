// Adição da biblioteca para função fgets.
int main()
{
   char a[100], b[100]; // Utilizar macros.

   printf("Enter a string\n"); // Apenas uma string é dada como entrada.
   get(b); // Utilização de um método que não é recomendado. Usar fgets!

   if (strcmp(a,b) == 10) // A condição está correta?
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");

   return 0;
}

