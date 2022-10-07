#include "main.h" 
 #include <stdlib.h> 
  
 /** 
  * malloc_checked -  a function that allocates memory 
  * @b: amount of bytes. 
  * Return: a pointer to the memory or NULL if the process fails 
  */ 
  
 void *malloc_checked(unsigned int b) 
 { 
         char *p; 
  
         p = malloc(b); 
         if (p == NULL) 
                 exit(98); 
         return (p); 
 }
