#include <stdio.h>

int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) 
       is adjusted because the recursive call 
       josephus(n - 1, k) considers the original 
       position k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}

// Driver Program to test above function
int main()
{
  int n = 14;
  int k = 2;
  printf("The chosen place is %d", 
                 josephus(n, k));
  return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) the space used in recursion call stack
