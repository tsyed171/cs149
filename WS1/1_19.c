#include <stdio.h>
/**
 * Description: Warm Up: Basic Output with variables
 * Author name: Talia Syed
 * Author email: talia.syed@sjsu.edu
 * Last modified date: Feb 5, 2023
 * Creation date: Feb 5, 2023
 **/

 /**
 * This function prints a number and some operations done on it
 * Assumption: print statements written correctly
 * Input parameters: void
 * Returns: void
**/
int main(void) {
    int userNum;
    int userNumTwo;

   printf("Enter integer:\n");
   scanf("%d", &userNum);

   printf("You entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum*userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum*userNum*userNum);

   printf("Enter another integer:\n");
   scanf("%d", &userNumTwo);

   printf("%d + %d is %d\n", userNum, userNumTwo, userNum+userNumTwo);
   printf("%d * %d is %d\n", userNum, userNumTwo, userNum*userNumTwo);

   return 0;
}
