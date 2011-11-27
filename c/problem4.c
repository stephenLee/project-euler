/**
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.
Find the largest palindrome made from the product of two 3-digit numbers.
**/

#include<stdio.h>

int is_palindromic(unsigned int n);

int main(int argc, char** argv)
{
  unsigned int i,j,max = 0;
  for (i=100; i <= 999; i++)
  {
    for(j=100; j<=999; j++)
    {
      unsigned int p = i*j;
      if (is_palindromic(p) && p > max)
      {
        max = p;
      }
    }
  }
  printf("%u\n",max);
  return 0;
}

int is_palindromic(unsigned int n)
{
  unsigned int reverse_number = 0, t=n;
  
  while (t) 
  {
    reverse_number = 10*reverse_number + (t % 10);
    t /= 10;
  }
  return reverse_number == n;
}
