#include "main.h" 
 #include <stdio.h> 
  
 /** 
  * print_diagsums - a function that prints the sum of the two diagonals 
  * @a: Pointer to an array 
  * @size: Size of the matrix 
  * Return: 0 
  */ 
  
 void print_diagsums(int *a, int size) 
 { 
         int i; 
         int c = 0; 
         int d = 0; 
  
         for (i = 0; i < size; i++) 
         { 
                 c += a[i]; 
                 d += a[size - i - 1]; 
                 a += size; 
         } 
         printf("%d, ", c); 
         printf("%d\n", d); 
 }
