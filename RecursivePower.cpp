class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
    {
        //Your code here
        if( p == 0){       // Base case: anything raised to the power of 0 is 1
            return 1;
        }
      // Recursive case: multiply n with the result of n^(p-1)

        return n * RecursivePower(n, p-1);
    }
};
