#include "main.h" 
 #include <stdio.h> 
  
 /** 
  * rev_string - function that reverses a string. 
  * @s: string input 
  * Return: 0 
  */ 
  
 void rev_string(char *s) 
 { 
         int i, j, k, mike; 
  
         i = 0; 
         while (s[i] != '\0') 
         { 
                 i++; 
         } 
         k = 0; 
         j = i - 1; 
  
         while (k < j) 
         { 
                 mike = s[k]; 
                 s[k] = s[j]; 
                 s[j] = mike; 
                 k++; 
                 j--; 
         } 
  
 } 
 
