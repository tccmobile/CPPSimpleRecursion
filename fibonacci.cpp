//A C++ program to calculate the nth Fibonacci number using a recursive function.
//
//Input: A number n
//Output: The nth Fibonacci number
//

#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}