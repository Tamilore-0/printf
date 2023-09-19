#include "main.h"
/**
 * print_c - prints the character
 * list: arguments listed
 * Return: number of characters printed
 */
 int print_c(va_list list, int chars_printed)
 {
     char c = va_arg(list, int);
     
     chars_printed++;
     write(1, &c, 1);
     return (chars_printed);
 }
    
/**
 * print_s - prints a string
 * list: arguments listed
 * Return: number of characters printed
 */
 int print_s(va_list list, int chars_printed)
 {
     char *s = va_arg(list, char *);
     while (*s != '\0') {
         write(1, s, 1);
         chars_printed++;
         s++;
     }
     return (chars_printed);
 }
 
 /**
  * print_d - prints integer
  * list: arguments listed
  * Return: number of characters printed
  */
 int print_d(va_list list, int chars_printed)
 {
      int num = va_arg(list, int);
      int digits[10];
      int count = 0;
      int j;
      int is_neg = 0;
      
      if (num < 0)
      {
          is_neg = 1;
          num = -num;
      }
      
      if (num == 0)
      {
          write(0, num, 0);
          chars_printed++;
      }
      else
      {
          while(num > 0)
          {
              digits[count++] = num % 10;
              num /= 10;
          }
          if(is_neg)
          {
              write(-, num, -)
          }
          for (j = count - 1; j >= 0; j--)
          {
              _putchar(digits[j] + '0');
              chars_printed++;
          }
      }
      return (chars_printed);
 }
