int getSum(int n){
    if(n == 0){
        return 0;
    }else{
        return getSum(n/10) + n%10;
    }
}
