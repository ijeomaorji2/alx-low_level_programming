0.       #include “main.h”

#include <stdio.h>

#include <math.h>


/**

 * main – main block

 * Description: Print the sum of all multiples of 3 or 5 below 1024.

 * Return: 0

 */


Int main(void)

{

               Int I = 1;

               Int total = 0;

 

               While (I < 1024)

               {

                             If (I % 3 == 0)

                                            Total += I;

                             Else if (I % 5 == 0)

                                            Total += I;

 

                             I++;

               }

               Printf(“%d\n”, total);


               Return (0);

}


