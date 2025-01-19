class Solution {
  public:
   int reverseNumber(int n)
   {
       int reversed = 0;
        while(n > 0){
            reversed = reversed * 10 + (n%10);
            n /= 10;
        }
        return reversed;
   }
    int reverseExponentiation(int n) {
        // code here
        int reversed = reverseNumber(n);
        return pow(n, reversed);

    }
 
};
