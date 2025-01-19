// Recursive
int getSum(int n){
    if(n == 0){
        return 0;
    }else{
        return getSum(n/10) + n%10;
    }
}
// O(d) :TC
// O(d) : AS

// Iterative

int getSum(int n)
{
    int res = 0;
    while(n>=0){
    res = res + n%10;
    n = n/10;
     }
    return res;
}

// TC:  O(d)
// AS : O(1)
