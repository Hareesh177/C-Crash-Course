
// Palindrome number or not

#include <stdio.h>

int Palindrome(int n)
{
  int temp, digit, rev=0;
  temp = n;

  while( n>0 )   //   it iterates the loop until n becomes 0
  {
     digit = n % 10;          // it gives remainder of n/10 i.e last digit in n
     rev = rev*10 + digit;    // logic for reversing number
     n= n/10;                 // it gives quotient of n/10 
  }
  if( rev == temp )    // if rev and temp are equal, it will assign Palindrome(number)=0
  return 0;
  else                 //if rev and temp are not equal, it will assign Palindrome(number)=1
  return 1;
}
int main()
{
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  int x = Palindrome(number);
  if(x == 0)
  printf("%d is a palindrome number.\n",number);
  else
  printf("%d is not a palindrome number.\n",number);
  return 0;
}
