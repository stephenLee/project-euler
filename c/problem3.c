/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *	What is the largest prime factor of the number 600851475143 ?
 */

/**
 * idea: every positive integer has a unique prime factorization
 *
 */

#include <stdio.h>

int main(int argc, char** argv)
{
  unsigned long long int number = 600851475143ULL;
  unsigned long long i;
  
  for (i = 2ULL; i < number; i++)
  {
    while (number % i == 0){
      number /= i;
    }
  }
 printf("%llu\n", number);
 return 0;
}
