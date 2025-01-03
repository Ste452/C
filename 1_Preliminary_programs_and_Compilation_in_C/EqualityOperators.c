
// Using if statements, relational operators
#include <stdio.h>

/* main function starts program execution */
int main( void )
{
   int num1; /* first user number to be read */
   int num2; /* second user number to be read */

   printf( "Enter two integers and I’ll tell you n" );
   printf( "the relations they satisfy: ");

   scanf( "%d%d", &num1, &num2 ); /* reads two integers */

   if ( num1 == num2 ) {
     printf( "%d is equal to %d n", num1, num2 );
   } /* end of the if */

   if ( num1 != num2 ) {
     printf( "%d is not equal to %d n", num1, num2 );
    } /* end of the if */

   if ( num1 < num2 ) {
     printf( "%d is less than %d n", num1, num2 );
   } /* end of the if */

   if ( num1 > num2 ) {
     printf( "%d is greater than %d n", num1, num2 );
   } /* end of the if */

   if ( num1 <= num2 ) {
     printf( "%d is less than or equal to %d n", num1, num2 );
   } /* end of the if */

   if ( num1 >= num2 ) {
     printf( "%d is greater than or equal to %d n", num1, num2 );
   } /* end of if */

   return 0; /* indicates that the program has been successfully completed */
} /* end of main function */
