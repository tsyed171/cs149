#include <stdio.h>
/**
 * Description: Input and Formatted Output: Right-Facing Arrow
 * Author name: Talia Syed
 * Author email: talia.syed@sjsu.edu
 * Last modified date: Feb 5, 2023
 * Creation date: Feb 5, 2023
 **/

 /**
 * This function prints a right facing arrow with two integers
 * Assumption: print statements formatted correctly
 * Input parameters: void
 * Returns: void
**/
int main(void) {
   int baseInt;
   int headInt;

   printf("Enter an integer for the base!\n");
   scanf("%d", &baseInt);
   printf("Enter an integer for the head!\n");
   scanf("%d", &headInt);

   printf("    %d\n", headInt);
   printf("    %d%d\n", headInt, headInt);
   printf("%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("%d%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt, headInt);
   printf("%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("    %d%d\n", headInt, headInt);
   printf("    %d\n", headInt);

   //getchar();
   return 0;
}
