/**
 * A Pythagorean triplet is a set of three natural numbers, a<b<c, for which, a^2+b^2=c * ^2, There exists exactly one Pythagorean triplet for which a+b+c=1000.
 * Find the product abc
 **/

#include<stdio.h>

int main(int argc, char *argv[])
{
  int i, j, k,product;
  for (k=1; k<1000; k++)
  {
    for (j=1; j<k; j++)
    {
      for (i=1; i<j; i++)
        if ((i + j + k) == 1000 && (i*i + j*j) == k*k)
          product=i*j*k;
    }
  }
  printf("%d\n",product);
  return 0;
}
