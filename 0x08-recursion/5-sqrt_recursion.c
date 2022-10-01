#include "main.h" 
  
 /** 
  * helperFunction - checks if sqrt of number exists 
  * @num: number. 
  * @pSqrt: poissible sqrt of number 
  * Return: 0 
  */ 
  
 int helperFunction(int num, int pSqrt) 
 { 
         if ((pSqrt * pSqrt) == num) 
         { 
                 return (pSqrt); 
         } 
         else 
         { 
                 if ((pSqrt * pSqrt) > num) 
                         return (-1); 
                 else 
                         return (helperFunction(num, pSqrt + 1)); 
         } 
 } 
  
 /**
