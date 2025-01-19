int fibonacci(int n) {
    // Base cases
    if (n == 0) 
        return 0; // The 0th Fibonacci number is 0
    if (n == 1) 
        return 1; // The 1st Fibonacci number is 1

    // Recursive case: sum of the two preceding numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}
