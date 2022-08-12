#include <stdio.h>

/* Write a program that will 
input 2 numbers and print the sum */
#define pi 3.1416
int main() {
  int a,b,sum;
  //const float pi = 3.1416;
  float avg;
  printf("Enter first number: \n");
  scanf("%d",&a);
  printf("Enter second number: \n");
  scanf("%d",&b);
  sum=a+b;
  avg = (sum/2);
  printf("The sum of %d and %d = %d\n",a, b, sum);
  printf("The avg of %d and %d = %f\n", a, b, avg);
  return 0;
}