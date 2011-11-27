/**
 * Find the difference between the sum of the squares of the first one hundred natural  * numbers and the square of the sum.
**/

#include<stdio.h>

int main(int argc, char** argv)
{
  int n=100,sum,sum_sq;
  
  sum = n*(n+1)/2;
  sum_sq = (2*100+1)*(100+1)*100/6;
  
  printf("%d\n",sum*sum-sum_sq);
  return 0;
}
