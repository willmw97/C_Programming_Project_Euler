#include <stdio.h>
#include <stdlib.h>

int main()
{

   bool isPalindrome(int num)   // Change this to bool
 {
      int n = num;
      int i = 0;
      int j = 0;
      int k = 0;
      int count = 1; // Start counting at 1, to account for 1 digit numbers
      int yes = 0;

  //Determines the size of numArray
  while(n/10 != 0)
  {
       // n%10; <-- What was that all about!
       count++;
       n = n/10;
  }

  int numArray[count];

  //Fill numArray with each digit of num
  for(i = 0; i < count; i++)                 // This will crash if you use index=count; Array indices go from 0 to Size-1
  {
       numArray[i] = num%10;
       //printf("%d\n", numArray[i]);
       num = num/10;
  }

  //Determines if num is a Palindrome

  while(numArray[k] == numArray[count-1])       // Again count-1 not count; This is really bad though what if you have 111111 or some number longer than 6. It might also go out of bounds
 {
       k = k + 1;
       count = count - 1;
       yes++;
  }


  for(k = 1; k <= count; k++)
  {
     if(numArray[k-1] != numArray[count-k])
       return false;
  }

  return true;

}
}
