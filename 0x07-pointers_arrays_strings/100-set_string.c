#include "main.h" 
 #include <stdio.h> 
  
 /** 
  * set_string - a function that sets the value of a pointer to a char. 
  * @s: Double pointer 
  * @to: Pointer 
  * Return: 0 
  */ 
  
 void set_string(char **s, char *to) 
 { 
         *s = to; 
 }
