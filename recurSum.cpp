#include<iostream>
using namespace std;

int recurSum(int n){
    if(n <= 1){
        return n;
    }
    return n + recurSum(n - 1);
}

int main(){
    int n = 5;
    cout<<recurSum(n);
    
    return 0;
}


// Time complexity : O(n)

// Auxiliary space : O(n)

