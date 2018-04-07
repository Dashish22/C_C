
#include < stdio.h > #include < string.h >

   int main(void) {
      char second[] = " chocolate ";
      char first[] = "kinder";

      strcat(first, second);
      printf("first: %s\n", first);

      return 0;
   }